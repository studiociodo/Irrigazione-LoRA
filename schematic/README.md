# Schematics
In this folder you can view schematic made with [Fritzing](https://fritzing.org/) and ready exported Gerber to upload for production facilities like JLCPCB, the size of the PCB was designed for this [DIN Rail Box](https://ebmstore.it/index.php?route=product/product&product_id=643).
for select the module address you have to set the jumpers like reported on image below:



The main board is "modulo MCU" that use:

1X [Arduino Nano](https://ebmstore.it/index.php?route=product/product&product_id=2233)

1X [Step Down Module fixed to 5V](https://ebmstore.it/index.php?route=product/product&product_id=64)

1X [4 Channel Logical Level Shifter](https://ebmstore.it/index.php?route=product/product&product_id=85)

1X Capacitors 10uF 10V

2X Resistor 150 Ohm 1/4W

1X Green Led Diode

1X [2 pole Screw Connector with pitch 5mm](https://ebmstore.it/index.php?route=product/product&product_id=600)

3X [2 pole Screw Connector with pitch 2,54mm](https://ebmstore.it/index.php?route=product/product&product_id=601)




The module "module ingressi" where you can connect 16 contact with 24V AC:

1X  [MCP23017-E/SP IC package DIP-28](https://www.tme.eu/it/details/mcp23017-e_sp/circuiti-integrati-interf-rimanenti/microchip-technology/)

16X [LTV844 Optocoupler](https://www.tme.eu/it/details/ltv-844/optoisolatori-uscita-analogica/liteon/)

16X Resistor 680 Ohm 2W  - preferred metal oxide type!

16X  Capacitor 100uF 10V

17X  Resistor 10K Ohm 1/4W

10X [2 pole Screw Connector with pitch 5mm](https://ebmstore.it/index.php?route=product/product&product_id=600)

6X  [2 pole Screw Connector with pitch 2,54mm](https://ebmstore.it/index.php?route=product/product&product_id=601)



The module "ricevitore" where you can connect 4 bistable valve and battery power it from 9V to 14V:

1X  [Arduino Nano 3.3V@8Mhz](https://www.digikey.it/it/products/detail/sparkfun-electronics/DEV-11114/5140819), from the board you have to remove the Power LED and LDO regulator to improve efficiency like picture below:
![improve_efficiency](https://github.com/studiociodo/Irrigazione-LoRA/assets/150088592/5726c0d6-aa26-41f7-a515-380144912a6c)


2X  [TB6612FNG Breakout module](https://www.tme.eu/it/details/oky3199-4/comandi-modulari-per-motori/okystar/)

16X [MCP1702-33 LDO Voltage regulator 3.3V](https://www.tme.eu/it/details/ltv-844/optoisolatori-uscita-analogica/liteon/)

16X Resistor 680 Ohm 2W  - preferred metal oxide type!

16X  Capacitor 100uF 10V

17X  Resistor 10K Ohm 1/4W

5X [2 pole Screw Connector with pitch 5mm](https://ebmstore.it/index.php?route=product/product&product_id=600)

6X  [2 pole Screw Connector with pitch 2,54mm](https://ebmstore.it/index.php?route=product/product&product_id=601)
