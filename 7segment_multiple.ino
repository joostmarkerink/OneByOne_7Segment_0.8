
#define PIN_CLOCK D5
#define PIN_DATA D6


void set7Segments(byte datapin,byte clockpin,byte digits,int num,char dp=-1){
  static const byte numdata[]={238,40,205,109,43,103,231,44,239,111};
  int n=num;
  for(byte d=0;d<digits;d++){
    int nm=n-((n/10)*10);
    byte segs=numdata[nm];
    n/=10;
    if(nm==0 && n==0 && !(d==0 && num==0))  segs=0;
    if(d==dp) segs|=1<<4;
    shiftOut(datapin,clockpin,LSBFIRST,segs);
  }
}


void setup() {
  pinMode(PIN_DATA,OUTPUT);
  digitalWrite(PIN_DATA,LOW);
  pinMode(PIN_CLOCK,OUTPUT);
  digitalWrite(PIN_CLOCK,LOW);
}


void loop() {
  for(byte i=0;i<100;i++){
    set7Segments(PIN_DATA,PIN_CLOCK,2,i);
    delay(200);
  }
}
