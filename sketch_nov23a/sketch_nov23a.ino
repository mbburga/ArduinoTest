int pin1 = 7;
int pin2 = 8;
int pin3 = 9;
int time1 = 5000;

void setup() {
  // put your setup code here, to run once:
  pinMode (pin1,OUTPUT);
  pinMode (pin2,OUTPUT);
  pinMode (pin3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pin1,HIGH);
  digitalWrite(pin2,LOW);
  digitalWrite(pin3,LOW);
  delay(time1);
    digitalWrite(pin1,LOW);
  digitalWrite(pin2,HIGH);
  digitalWrite(pin3,LOW);
  delay(time1);
    digitalWrite(pin1,LOW);
  digitalWrite(pin2,LOW);
  digitalWrite(pin3,HIGH);
  delay(time1);
  
}
