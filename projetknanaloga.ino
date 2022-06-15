int tip1=12;
int tip2=13;
int LED1=3;
int LED2=5;
int prev=0;
int pot=A0;
int potVal=0;
int termistor=A1;
int i;
int trans=9;
int hit=0;
int termMax=35;
int termMin=0;
int term=0;
int st=1;
void setup() {
pinMode(LED1, OUTPUT);
pinMode(LED2, OUTPUT);
pinMode(tip1, OUTPUT);
pinMode(tip2, OUTPUT);
Serial.begin(9600);
}

void loop() {
  if(digitalRead(tip2)==1){
    st=st+1;
    delay(200);
    if(st%2==0){
      digitalWrite(LED1,LOW);
      digitalWrite(LED2,LOW);
      analogWrite(trans, LOW);
      if(digitalRead(tip1)==1){
        digitalWrite(LED2,HIGH);
        digitalWrite(LED1,LOW);
        i=analogRead(pot);
        potVal=map(i, 0, 1023, 0, 255 );
        analogWrite(trans, potVal);}
        Serial.println(potVal);}
      else if(digitalRead(tip1)==0){
        digitalWrite(LED1, HIGH);
        digitalWrite(LED2, LOW);
        term = analogRead(termistor);
        term = (term 5.0100.0)/1024.0; 
        Serial.println(term); 
        if(term < termMin) { 
          digitalWrite(trans, LOW);}
        if((term >= termMin) && (term <= termMax)) {
        hit = map(term, termMin, termMax, 0, 255);
        analogWrite(trans, term);}}

    }}