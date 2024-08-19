int sensor = 5;
int buzzer =6;
void setup() {
  // put your setup code here, to run once:
  pinMode(sensor,INPUT);
  pinMode(buzzer,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int stat = digitalRead(sensor);
  digitalWrite(buzzer,stat);

}
