#define RICEVITORE 1
char posizione;




void setup() {
  Serial.begin(9600);

  pinMode(2, INPUT_PULLUP);   // mettendolo basso risveglia l'MCU
  // 3 = STBY, attiva bobine a livello alto
  // 4 = BIN2, bobina1 aperta
  // 5 = BIN1, bobina1 chiusa
  // 6 = AIN2, bobina2 aperta
  // 7 = AIN1, bobina2 chiusa
  // 8 = BIN2, bobina3 aperta
  // 9 = BIN1, bobina3 chiusa
  //10 = AIN2, bobina4 aperta
  //11 = AIN1, bobina4 chiusa

  for (int i = 3; i < 20; i++) {
    pinMode(i, OUTPUT);
  }


}

void loop() {

  attachInterrupt(0, wakeUp, FALLING);  //avvia interrupt
  vaiananna();
  detachInterrupt(0);  //riparti da qui!

  while (!Serial.available()) {}
  String raw = Serial.readStringUntil('\n');
  raw.trim();
  raw.toUpperCase();
  if ((raw.startsWith("U")) && (raw.endsWith("U"))) {
    char tempval = raw.charAt(RICEVITORE);
    if (tempval != posizione) {
      posizione = tempval;
      azionavalvole();
    }
  }

}

void wakeUp()
{
}

void vaiananna() {
  SMCR |= (1 << 2); //power down mode
  SMCR |= 1;//enable sleep
  ADCSRA &= ~(1 << 7); //disable ADC
  MCUCR |= (3 << 5); //set both BODS and BODSE at the same time
  MCUCR = (MCUCR & ~(1 << 5)) | (1 << 6); //then set the BODS bit and clear the BODSE bit at the same time
  __asm__  __volatile__("sleep");//in line assembler to go to sleep

}

void azionavalvole() {
  switch (posizione) {
    case '0':
      digitalWrite(3, HIGH);
      delay(10);
      digitalWrite(5, HIGH);
      delay(80);
      digitalWrite(5, LOW);
      delay(10);
      digitalWrite(7, HIGH);
      delay(80);
      digitalWrite(7, LOW);
      delay(10);
      digitalWrite(9, HIGH);
      delay(80);
      digitalWrite(9, LOW);
      delay(10);
      digitalWrite(11, HIGH);
      delay(80);
      digitalWrite(11, LOW);
      delay(10);
      digitalWrite(3, LOW);
      delay(10);
      break;
    case '1':
      digitalWrite(3, HIGH);
      delay(10);
      digitalWrite(5, HIGH);
      delay(80);
      digitalWrite(5, LOW);
      delay(10);
      digitalWrite(7, HIGH);
      delay(80);
      digitalWrite(7, LOW);
      delay(10);
      digitalWrite(9, HIGH);
      delay(80);
      digitalWrite(9, LOW);
      delay(10);
      digitalWrite(10, HIGH);
      delay(80);
      digitalWrite(10, LOW);
      delay(10);
      digitalWrite(3, LOW);
      delay(10);
      break;
    case '2':
      digitalWrite(3, HIGH);
      delay(10);
      digitalWrite(5, HIGH);
      delay(80);
      digitalWrite(5, LOW);
      delay(10);
      digitalWrite(7, HIGH);
      delay(80);
      digitalWrite(7, LOW);
      delay(10);
      digitalWrite(8, HIGH);
      delay(80);
      digitalWrite(8, LOW);
      delay(10);
      digitalWrite(11, HIGH);
      delay(80);
      digitalWrite(11, LOW);
      delay(10);
      digitalWrite(3, LOW);
      delay(10);
      break;
    case '3':
      digitalWrite(3, HIGH);
      delay(10);
      digitalWrite(5, HIGH);
      delay(80);
      digitalWrite(5, LOW);
      delay(10);
      digitalWrite(7, HIGH);
      delay(80);
      digitalWrite(7, LOW);
      delay(10);
      digitalWrite(8, HIGH);
      delay(80);
      digitalWrite(8, LOW);
      delay(10);
      digitalWrite(10, HIGH);
      delay(80);
      digitalWrite(10, LOW);
      delay(10);
      digitalWrite(3, LOW);
      delay(10);
      break;
    case '4':
      digitalWrite(3, HIGH);
      delay(10);
      digitalWrite(5, HIGH);
      delay(80);
      digitalWrite(5, LOW);
      delay(10);
      digitalWrite(6, HIGH);
      delay(80);
      digitalWrite(6, LOW);
      delay(10);
      digitalWrite(9, HIGH);
      delay(80);
      digitalWrite(9, LOW);
      delay(10);
      digitalWrite(11, HIGH);
      delay(80);
      digitalWrite(11, LOW);
      delay(10);
      digitalWrite(3, LOW);
      delay(10);
      break;
    case '5':
      digitalWrite(3, HIGH);
      delay(10);
      digitalWrite(5, HIGH);
      delay(80);
      digitalWrite(5, LOW);
      delay(10);
      digitalWrite(6, HIGH);
      delay(80);
      digitalWrite(6, LOW);
      delay(10);
      digitalWrite(9, HIGH);
      delay(80);
      digitalWrite(9, LOW);
      delay(10);
      digitalWrite(10, HIGH);
      delay(80);
      digitalWrite(10, LOW);
      delay(10);
      digitalWrite(3, LOW);
      delay(10);
      break;
    case '6':
      digitalWrite(3, HIGH);
      delay(10);
      digitalWrite(5, HIGH);
      delay(80);
      digitalWrite(5, LOW);
      delay(10);
      digitalWrite(6, HIGH);
      delay(80);
      digitalWrite(6, LOW);
      delay(10);
      digitalWrite(8, HIGH);
      delay(80);
      digitalWrite(8, LOW);
      delay(10);
      digitalWrite(11, HIGH);
      delay(80);
      digitalWrite(11, LOW);
      delay(10);
      digitalWrite(3, LOW);
      delay(10);
      break;
    case '7':
      digitalWrite(3, HIGH);
      delay(10);
      digitalWrite(5, HIGH);
      delay(80);
      digitalWrite(5, LOW);
      delay(10);
      digitalWrite(6, HIGH);
      delay(80);
      digitalWrite(6, LOW);
      delay(10);
      digitalWrite(8, HIGH);
      delay(80);
      digitalWrite(8, LOW);
      delay(10);
      digitalWrite(10, HIGH);
      delay(80);
      digitalWrite(10, LOW);
      delay(10);
      digitalWrite(3, LOW);
      delay(10);
      break;
    case '8':
      digitalWrite(3, HIGH);
      delay(10);
      digitalWrite(4, HIGH);
      delay(80);
      digitalWrite(4, LOW);
      delay(10);
      digitalWrite(7, HIGH);
      delay(80);
      digitalWrite(7, LOW);
      delay(10);
      digitalWrite(9, HIGH);
      delay(80);
      digitalWrite(9, LOW);
      delay(10);
      digitalWrite(11, HIGH);
      delay(80);
      digitalWrite(11, LOW);
      delay(10);
      digitalWrite(3, LOW);
      delay(10);
      break;
    case '9':
      digitalWrite(3, HIGH);
      delay(10);
      digitalWrite(4, HIGH);
      delay(80);
      digitalWrite(4, LOW);
      delay(10);
      digitalWrite(7, HIGH);
      delay(80);
      digitalWrite(7, LOW);
      delay(10);
      digitalWrite(9, HIGH);
      delay(80);
      digitalWrite(9, LOW);
      delay(10);
      digitalWrite(10, HIGH);
      delay(80);
      digitalWrite(10, LOW);
      delay(10);
      digitalWrite(3, LOW);
      delay(10);
      break;
    case 'A':
      digitalWrite(3, HIGH);
      delay(10);
      digitalWrite(4, HIGH);
      delay(80);
      digitalWrite(4, LOW);
      delay(10);
      digitalWrite(7, HIGH);
      delay(80);
      digitalWrite(7, LOW);
      delay(10);
      digitalWrite(8, HIGH);
      delay(80);
      digitalWrite(8, LOW);
      delay(10);
      digitalWrite(11, HIGH);
      delay(80);
      digitalWrite(11, LOW);
      delay(10);
      digitalWrite(3, LOW);
      delay(10);
      break;
    case 'B':
      digitalWrite(3, HIGH);
      delay(10);
      digitalWrite(4, HIGH);
      delay(80);
      digitalWrite(4, LOW);
      delay(10);
      digitalWrite(7, HIGH);
      delay(80);
      digitalWrite(7, LOW);
      delay(10);
      digitalWrite(8, HIGH);
      delay(80);
      digitalWrite(8, LOW);
      delay(10);
      digitalWrite(10, HIGH);
      delay(80);
      digitalWrite(10, LOW);
      delay(10);
      digitalWrite(3, LOW);
      delay(10);
      break;
    case 'C':
      digitalWrite(3, HIGH);
      delay(10);
      digitalWrite(4, HIGH);
      delay(80);
      digitalWrite(4, LOW);
      delay(10);
      digitalWrite(6, HIGH);
      delay(80);
      digitalWrite(6, LOW);
      delay(10);
      digitalWrite(9, HIGH);
      delay(80);
      digitalWrite(9, LOW);
      delay(10);
      digitalWrite(11, HIGH);
      delay(80);
      digitalWrite(11, LOW);
      delay(10);
      digitalWrite(3, LOW);
      delay(10);
      break;
    case 'D':
      digitalWrite(3, HIGH);
      delay(10);
      digitalWrite(4, HIGH);
      delay(80);
      digitalWrite(4, LOW);
      delay(10);
      digitalWrite(6, HIGH);
      delay(80);
      digitalWrite(6, LOW);
      delay(10);
      digitalWrite(9, HIGH);
      delay(80);
      digitalWrite(9, LOW);
      delay(10);
      digitalWrite(10, HIGH);
      delay(80);
      digitalWrite(10, LOW);
      delay(10);
      digitalWrite(3, LOW);
      delay(10);
      break;
    case 'E':
      digitalWrite(3, HIGH);
      delay(10);
      digitalWrite(4, HIGH);
      delay(80);
      digitalWrite(4, LOW);
      delay(10);
      digitalWrite(6, HIGH);
      delay(80);
      digitalWrite(6, LOW);
      delay(10);
      digitalWrite(8, HIGH);
      delay(80);
      digitalWrite(8, LOW);
      delay(10);
      digitalWrite(11, HIGH);
      delay(80);
      digitalWrite(11, LOW);
      delay(10);
      digitalWrite(3, LOW);
      delay(10);
      break;
    case 'F':
      digitalWrite(3, HIGH);
      delay(10);
      digitalWrite(4, HIGH);
      delay(80);
      digitalWrite(4, LOW);
      delay(10);
      digitalWrite(6, HIGH);
      delay(80);
      digitalWrite(6, LOW);
      delay(10);
      digitalWrite(8, HIGH);
      delay(80);
      digitalWrite(8, LOW);
      delay(10);
      digitalWrite(10, HIGH);
      delay(80);
      digitalWrite(10, LOW);
      delay(10);
      digitalWrite(3, LOW);
      delay(10);
      break;
      break;
  }
}


