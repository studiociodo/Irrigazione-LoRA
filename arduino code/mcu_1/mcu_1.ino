#include <Wire.h>             // libreria ufficiale
#include <SoftwareSerial.h>   // libreria ufficiale
#include <MCP23017.h>         // https://github.com/kasperskaarhoj/MCP23017-Arduino-Library


MCP23017 GPIOchip1;           // inizializzo oggetti per moduli espansione
SoftwareSerial LoRA(10, 9);   // porta per modulo LoRA

                               // variabili globali
String sendonair = "UU";
String pinstatus;



void setup()
{
  Serial.begin(9600);
  LoRA.begin(9600);
  Wire.begin();                                               // inizializza bus I2C
  GPIOchip1.begin(B000);                                      // inizializza gli integrati MCP23017
  GPIOchip1.init();
  GPIOchip1.inputOutputMask(65535);                           // impostali tutti come input e abilita la resistenza interna di pullup
  GPIOchip1.internalPullupMask(65535);

}


void loop()
{
  pinstatus = String(GPIOchip1.digitalWordRead(), HEX);                     // lettura di tutti i piedini degli integrati e creazione stringa
  while (pinstatus.length() < 4) pinstatus = "0" + pinstatus;
  pinstatus.toUpperCase();
  
  pinstatus = String ("U" + pinstatus + "U");

  if (sendonair != pinstatus) {   
    
    sendonair = pinstatus;
    Serial.print("pinstatus =");
    Serial.println(pinstatus);
    Serial.print("sendonair =");
    Serial.println(sendonair);
    digitalWrite(13, HIGH);
    LoRA.println(sendonair);                                               // mandali via LoRA
    delay(5000);
    digitalWrite(13, LOW);
  }
  delay(5000);
  
}

