
#define PIN_CLOCK D5
#define PIN_DATA D6

void setup() {
  pinMode(PIN_DATA,OUTPUT);
  digitalWrite(PIN_DATA,LOW);
  pinMode(PIN_CLOCK,OUTPUT);
  digitalWrite(PIN_CLOCK,LOW);
}

#define SEG_G  0
#define SEG_F  1
#define SEG_A  2
#define SEG_B  3
#define SEG_DP 4
#define SEG_C  5
#define SEG_D  6
#define SEG_E  7


  static const byte number[10]={
    (1<<SEG_A)|(1<<SEG_B)|(1<<SEG_C)|(1<<SEG_D)|(1<<SEG_E)|(1<<SEG_F),
    (1<<SEG_B)|(1<<SEG_C),
    (1<<SEG_A)|(1<<SEG_B)|(1<<SEG_G)|(1<<SEG_E)|(1<<SEG_D),
    (1<<SEG_A)|(1<<SEG_B)|(1<<SEG_C)|(1<<SEG_D)|(1<<SEG_G),
    (1<<SEG_F)|(1<<SEG_G)|(1<<SEG_B)|(1<<SEG_C),
    (1<<SEG_A)|(1<<SEG_F)|(1<<SEG_G)|(1<<SEG_C)|(1<<SEG_D),
    (1<<SEG_A)|(1<<SEG_F)|(1<<SEG_G)|(1<<SEG_C)|(1<<SEG_D)|(1<<SEG_E),
    (1<<SEG_A)|(1<<SEG_B)|(1<<SEG_C),
    (1<<SEG_A)|(1<<SEG_B)|(1<<SEG_C)|(1<<SEG_D)|(1<<SEG_E)|(1<<SEG_F)|(1<<SEG_G),
    (1<<SEG_A)|(1<<SEG_B)|(1<<SEG_C)|(1<<SEG_D)|(1<<SEG_F)|(1<<SEG_G)
  };






void loop() {
  for(byte i=0;i<10;i++){
    shiftOut(PIN_DATA,PIN_CLOCK,LSBFIRST,number[i]);
    delay(1000);
  }
}
