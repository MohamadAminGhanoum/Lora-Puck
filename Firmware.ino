#include <RadioLib.h>

// Define the SPI and control pins matching the LoRa Puck hardware layout
// Double-check your schematic's RP2040-to-SX1262 pin connections!
#define LORA_NSS    8   // Chip Select (NSS)
#define LORA_DIO1   9   // Busy/Interrupt line (DIO1)
#define LORA_NRST   13  // Reset pin (NRST)
#define LORA_BUSY   14  // Busy indicator pin (BUSY)

// Initialize the SX1262 module instance
SX1262 radio = new Module(LORA_NSS, LORA_DIO1, LORA_NRST, LORA_BUSY);

void setup() {
  Serial.begin(115200);
  while (!Serial); // Wait for serial monitor to open
  
  Serial.println(F("[SX1262] Initializing transceiver configuration..."));

  // Initialize SX1262 with European 868MHz settings
  // Carrier Frequency: 868.1 MHz
  // Bandwidth: 125.0 kHz (Standard LoRa)
  // Spreading Factor: 9 (Good balance of range and speed)
  // Coding Rate: 7 (CR 4/7 for error correction robustness)
  // Sync Word: 0x12 (Private network sync word)
  // Output Power: 10 dBm (10 mW - well below Denmark's 25 mW legal ceiling)
  // Preamble Length: 8 symbols
  int state = radio.begin(868.1, 125.0, 9, 7, 0x12, 10, 8);

  if (state == RADIOLIB_ERR_NONE) {
    Serial.println(F("[SX1262] Initialization successful! Board is legal & optimized for EU."));
  } else {
    Serial.print(F("[SX1262] Initialization failed, code: "));
    Serial.println(state);
    while (true); // Halt execution if hardware matching fails
  }
}

int packetCounter = 0;

void loop() {
  Serial.print(F("[SX1262] Transmitting test packet #"));
  Serial.println(packetCounter);

  // Construct a simple telemetry text string
  String str = "Puck Ping #" + String(packetCounter);
  
  // Transmit the packet (this blocks until transmission finishes)
  int state = radio.transmit(str);

  if (state == RADIOLIB_ERR_NONE) {
    Serial.println(F("[SX1262] Packet sent successfully!"));
    
    // Print the measured data rate performance
    Serial.print(F("[SX1262] Data rate:\t"));
    Serial.print(radio.getDataRate());
    Serial.println(F(" bps"));
  } else if (state == RADIOLIB_ERR_TX_TIMEOUT) {
    Serial.println(F("[SX1262] Error: Transmission timed out!"));
  } else {
    Serial.print(F("[SX1262] Transmission failed, code: "));
    Serial.println(state);
  }

  packetCounter++;

  Serial.println(F("[System] Cooling down radio to respect duty-cycle regulations..."));
  delay(30000); 
}
