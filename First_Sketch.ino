void setup() {
  // So this just a comment hahaha we need a void setup and a void loop 
  // in Void setup whatever code we put here will run once but in loop it will run in a loop 
  pinMode (13, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);

}
