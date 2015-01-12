void setup() {
  Serial.begin(9600);
  for(int i=22; i <= 36; i=i+2) {
    pinMode(i, INPUT);
    pinMode(i+1, OUTPUT);
  }
  
  for(int i=22; i <= 36; i=i+2) {
    digitalWrite(i+1, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(100);               // wait for a second
    digitalWrite(i+1, LOW);   // turn the LED off by making the voltage LOW
    delay(100);
  }
}

void loop() {
  
  for(int i=22; i <= 36; i=i+2) {
    byte actState = digitalRead(i);
    digitalWrite(i+1, actState);
    

  }
}
