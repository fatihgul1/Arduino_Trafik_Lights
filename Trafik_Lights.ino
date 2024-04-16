// Traffic Lights

int ledRed = 13;
int ledYellow = 12;
int ledGreen = 11;

void setup() {
  pinMode(ledRed,OUTPUT);
  pinMode(ledYellow,OUTPUT);
  pinMode(ledGreen,OUTPUT);
}

void loop() {
  digitalWrite(ledRed,HIGH);
  delay(5000);
  digitalWrite(ledYellow,HIGH);
  delay(2000);
  
  digitalWrite(ledRed,LOW);
  digitalWrite(ledYellow,LOW);
  digitalWrite(ledGreen,HIGH);
  delay(5000);

  digitalWrite(ledGreen,LOW);
  digitalWrite(ledYellow,HIGH);
  delay(2000); 
  digitalWrite(ledYellow,LOW);
}
