# Lora-Puck
im planning on doing the lorapuck, while adding some simple and accurate sensors, which certainly will make this Lora Puck a lot more useful to me. Im planning to make 2 pcbs, one i keep at home that can track the temperature of e.g my room, and one i can take with me anywhere, and this will allow me to recieve signals from my home LORA, and i will be recieving it to my other LORA puc that i carry with me.
NOTE: as i am making it in the EU, i should follow the european law of max. 868 MHz, and not 915 MHz like USA


## Schematics:

<img width="847" height="583" alt="image" src="https://github.com/user-attachments/assets/17626b31-8b50-4f51-bcfe-b5a8bc3ae94b" />



## PCB:

<img width="454" height="487" alt="Screenshot 2026-07-03 at 01 11 20" src="https://github.com/user-attachments/assets/04ce93cc-fe98-44d5-aaa4-d19434ca37ea" />



## 3d pic of pcb:

<img width="704" height="531" alt="Screenshot 2026-07-03 at 01 11 49" src="https://github.com/user-attachments/assets/e6bc2243-0b85-43fd-b413-8b974665f198" />
<img width="479" height="526" alt="Screenshot 2026-07-03 at 01 14 08" src="https://github.com/user-attachments/assets/0bc8b9fb-3ba3-4d49-ba66-9d3855fb6d52" />


## BOM

|Name             |Vendor                 |Quantity|Price in USD|Link                                                                                                                                                                                                    |
|-----------------|-----------------------|--------|------------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|PCB              |JLCPCB                 |5       |10          |JLCPCB                                                                                                                                                                                                  |
|100nF capacitor  |LCSC                   |12      |self-sourced|                                                                                                                                                                                                        |
|47nH inductor    |LCSC                   |1       |0.23        |https://www.lcsc.com/product-detail/C440659.html?spm=wm.gwc.xh.4.tp___wm.ddx.ssl.gwc&lcsc_vid=QAMKAlFUFVZXUFcCTgNWBgcHQQVYBlQEFlBWAlJSEgIxVlNeQ1RXU1ZUTlhZVzsOAxUeFF5JWBEPFBcWGBMaSQgFBAJABAsLWA%3D%3D  |
|HTU21D           |LCSC                   |2       |3.29        |https://www.lcsc.com/product-detail/C83479.html?spm=wm.gwc.xh.1.tp___wm.ddx.ssl.gwc&lcsc_vid=QAMKAlFUFVZXUFcCTgNWBgcHQQVYBlQEFlBWAlJSEgIxVlNeQ1RXU1ZUTlhZVzsOAxUeFF5JWBEPFBcWGBMaSQgFBAJABAsLWA%3D%3D   |
|RP2040           |LCSC                   |2       |1.99        |https://www.lcsc.com/product-detail/C2040.html?spm=wm.gwc.xh.2.tp___wm.ddx.ssl.gwc&lcsc_vid=QAMKAlFUFVZXUFcCTgNWBgcHQQVYBlQEFlBWAlJSEgIxVlNeQ1RXU1ZUTlhZVzsOAxUeFF5JWBEPFBcWGBMaSQgFBAJABAsLWA%3D%3D    |
|SX1262IMLTRT     |LCSC                   |2       |6.51        |https://www.lcsc.com/product-detail/C191341.html?spm=wm.gwc.xh.3.tp___wm.ddx.ssl.gwc&lcsc_vid=QAMKAlFUFVZXUFcCTgNWBgcHQQVYBlQEFlBWAlJSEgIxVlNeQ1RXU1ZUTlhZVzsOAxUeFF5JWBEPFBcWGBMaSQgFBAJABAsLWA%3D%3D  |
|                 |                       |        |            |                                                                                                                                                                                                        |
|AP2112K-3.3TRG1  |LCSC                   |5       |0.55        |https://www.lcsc.com/product-detail/C23380830.html?spm=wm.gwc.xh.5.tp___wm.ddx.ssl.gwc&lcsc_vid=QAMKAlFUFVZXUFcCTgNWBgcHQQVYBlQEFlBWAlJSEgIxVlNeQ1RXU1ZUTlhZVzsOAxUeFF5JWBEPFBcWGBMaSQgFBAJABAsLWA%3D%3D|
|W25Q128JVS       |LCSC                   |2       |5.6         |https://www.lcsc.com/product-detail/C97521.html?spm=wm.gwc.xh.6.tp___wm.ddx.ssl.gwc&lcsc_vid=QAMKAlFUFVZXUFcCTgNWBgcHQQVYBlQEFlBWAlJSEgIxVlNeQ1RXU1ZUTlhZVzsOAxUeFF5JWBEPFBcWGBMaSQgFBAJABAsLWA%3D%3D   |
|10uF capacitor   |LCSC                   |50      |1.75        |https://www.lcsc.com/product-detail/C1691.html?spm=wm.gwc.xh.7.tp___wm.ddx.ssl.gwc&lcsc_vid=QAMKAlFUFVZXUFcCTgNWBgcHQQVYBlQEFlBWAlJSEgIxVlNeQ1RXU1ZUTlhZVzsOAxUeFF5JWBEPFBcWGBMaSQgFBAJABAsLWA%3D%3D    |
|12nHz crystal    |LCSC                   |20      |0.43        |https://www.lcsc.com/product-detail/C1332832.html?spm=wm.gwc.xh.8.tp___wm.ddx.ssl.gwc&lcsc_vid=QAMKAlFUFVZXUFcCTgNWBgcHQQVYBlQEFlBWAlJSEgIxVlNeQ1RXU1ZUTlhZVzsOAxUeFF5JWBEPFBcWGBMaSQgFBAJABAsLWA%3D%3D |
|470nF cap        |LCSC                   |100     |1.15        |https://www.lcsc.com/product-detail/C105526.html?spm=wm.gwc.xh.9.tp___wm.ddx.ssl.gwc&lcsc_vid=QAMKAlFUFVZXUFcCTgNWBgcHQQVYBlQEFlBWAlJSEgIxVlNeQ1RXU1ZUTlhZVzsOAxUeFF5JWBEPFBcWGBMaSQgFBAJABAsLWA%3D%3D  |
|1k resistor      |LCSC                   |100     |0.76        |https://www.lcsc.com/product-detail/C2907002.html?spm=wm.gwc.xh.10.tp___wm.ddx.ssl.gwc&lcsc_vid=QAMKAlFUFVZXUFcCTgNWBgcHQQVYBlQEFlBWAlJSEgIxVlNeQ1RXU1ZUTlhZVzsOAxUeFF5JWBEPFBcWGBMaSQgFBAJABAsLWA%3D%3D|
|0900FM15K0039001E|LCSC                   |1       |0.61        |https://www.lcsc.com/product-detail/C7434807.html?spm=wm.gwc.xh.0.tp___wm.ddx.ssl.gwc&lcsc_vid=QAMKAlFUFVZXUFcCTgNWBgcHQQVYBlQEFlBWAlJSEgIxVlNeQ1RXU1ZUTlhZVzsOAxUeFF5JWBEPFBcWGBMaSQgFBAJABAsLWA%3D%3D |
|100 ohm resistor |LCSC                   |1       |selfsourced |                                                                                                                                                                                                        |
|32MHz            |LCSC                   |2       |selfsourced |                                                                                                                                                                                                        |
|3.3pF capacitor  |LCSC                   |100     |1.04        |https://www.lcsc.com/product-detail/C1660.html?spm=wm.gwc.xh.11.tp___wm.ddx.ssl.gwc&lcsc_vid=QAMKAlFUFVZXUFcCTgNWBgcHQQVYBlQEFlBWAlJSEgIxVlNeQ1RXU1ZUTlhZVzsOAxUeFF5JWBEPFBcWGBMaSQgFBAJABAsLWA%3D%3D   |
| 1uF capacitor   |LCSC                   |50      |1.09        |https://www.lcsc.com/product-detail/C29936.html?spm=wm.gwc.xh.12.tp___wm.ddx.ssl.gwc&lcsc_vid=QAMKAlFUFVZXUFcCTgNWBgcHQQVYBlQEFlBWAlJSEgIxVlNeQ1RXU1ZUTlhZVzsOAxUeFF5JWBEPFBcWGBMaSQgFBAJABAsLWA%3D%3D  |
|5.1k resistor    |LCSC                   |100     |0.24        |https://www.lcsc.com/product-detail/C2907044.html?spm=wm.gwc.xh.13.tp___wm.ddx.ssl.gwc&lcsc_vid=QAMKAlFUFVZXUFcCTgNWBgcHQQVYBlQEFlBWAlJSEgIxVlNeQ1RXU1ZUTlhZVzsOAxUeFF5JWBEPFBcWGBMaSQgFBAJABAsLWA%3D%3D|
|USB-c            |LCSC                   |20      |1.41        |https://www.lcsc.com/product-detail/C2765186.html?spm=wm.gwc.xh.14.tp___wm.ddx.ssl.gwc&lcsc_vid=QAMKAlFUFVZXUFcCTgNWBgcHQQVYBlQEFlBWAlJSEgIxVlNeQ1RXU1ZUTlhZVzsOAxUeFF5JWBEPFBcWGBMaSQgFBAJABAsLWA%3D%3D|
|switch           |LCSC                   |2       |selfsourced |                                                                                                                                                                                                        |
|BLM15AX102SN1D   |LCSC                   |100     |1.26        |https://www.lcsc.com/product-detail/C85815.html?spm=wm.gwc.xh.15.tp___wm.ddx.ssl.gwc&lcsc_vid=QAMKAlFUFVZXUFcCTgNWBgcHQQVYBlQEFlBWAlJSEgIxVlNeQ1RXU1ZUTlhZVzsOAxUeFF5JWBEPFBcWGBMaSQgFBAJABAsLWA%3D%3D  |
|27.4 ohm resistor|LCSC                   |2       |selfsourced |                                                                                                                                                                                                        |
|1nF capacitor    |LCSC                   |1       |1.46        |https://www.lcsc.com/product-detail/C100040.html?spm=wm.gwc.xh.20.tp___wm.ddx.ssl.gwc&lcsc_vid=QAMKAlFUFVZXUFcCTgNWBgcHQQVYBlQEFlBWAlJSEgIxVlNeQ1RXU1ZUTlhZVzsOAxUeFF5JWBEPFBcWGBMaSQgFBAJABAsLWA%3D%3D |
| 39pF cap        |LCSC                   |100     |0.52        |https://www.lcsc.com/product-detail/C107049.html?spm=wm.gwc.xh.16.tp___wm.ddx.ssl.gwc&lcsc_vid=QAMKAlFUFVZXUFcCTgNWBgcHQQVYBlQEFlBWAlJSEgIxVlNeQ1RXU1ZUTlhZVzsOAxUeFF5JWBEPFBcWGBMaSQgFBAJABAsLWA%3D%3D |
| 15pF cap        |LCSC                   |100     |0.57        |https://www.lcsc.com/product-detail/C107037.html?spm=wm.gwc.xh.17.tp___wm.ddx.ssl.gwc&lcsc_vid=QAMKAlFUFVZXUFcCTgNWBgcHQQVYBlQEFlBWAlJSEgIxVlNeQ1RXU1ZUTlhZVzsOAxUeFF5JWBEPFBcWGBMaSQgFBAJABAsLWA%3D%3D |
| 47pF cap        |LCSC                   |100     |0.61        |https://www.lcsc.com/product-detail/C105622.html?spm=wm.gwc.xh.18.tp___wm.ddx.ssl.gwc&lcsc_vid=QAMKAlFUFVZXUFcCTgNWBgcHQQVYBlQEFlBWAlJSEgIxVlNeQ1RXU1ZUTlhZVzsOAxUeFF5JWBEPFBcWGBMaSQgFBAJABAsLWA%3D%3D |
| 9.1nH inductor  |LCSC                   |50      |0.54        |https://www.lcsc.com/product-detail/C395094.html?spm=wm.gwc.xh.19.tp___wm.ddx.ssl.gwc&lcsc_vid=QAMKAlFUFVZXUFcCTgNWBgcHQQVYBlQEFlBWAlJSEgIxVlNeQ1RXU1ZUTlhZVzsOAxUeFF5JWBEPFBcWGBMaSQgFBAJABAsLWA%3D%3D |
| 10k resistor    |LCSC                   |100     |0.51        |https://www.lcsc.com/product-detail/C98220.html?spm=wm.gwc.dh.21.tp___wm.ddx.ssl.gwc&lcsc_vid=QAMKAlFUFVZXUFcCTgNWBgcHQQVYBlQEFlBWAlJSEgIxVlNeQ1RXU1ZUTlhZVzsOAxUeFF5JWBEPFBcWGBMaSQgFBAJABAsLWA%3D%3D  |
|PE4259           |LCSC                   |2       |1.41        |https://www.lcsc.com/product-detail/C470892.html?spm=wm.gwc.xh.22.tp___wm.ddx.ssl.gwc&lcsc_vid=QAMKAlFUFVZXUFcCTgNWBgcHQQVYBlQEFlBWAlJSEgIxVlNeQ1RXU1ZUTlhZVzsOAxUeFF5JWBEPFBcWGBMaSQgFBAJABAsLWA%3D%3D |
|15uH inductor    |LCSC                   |20      |0.73        |https://www.lcsc.com/product-detail/C486329.html?spm=wm.gwc.xh.23.tp___wm.ddx.ssl.gwc&lcsc_vid=QAMKAlFUFVZXUFcCTgNWBgcHQQVYBlQEFlBWAlJSEgIxVlNeQ1RXU1ZUTlhZVzsOAxUeFF5JWBEPFBcWGBMaSQgFBAJABAsLWA%3D%3D |
|                 |                       |        |            |                                                                                                                                                                                                        |
|                 |Total cost w. shipping:|50 usd  |            |                                                                                                                                                                                                        |
