void setup()
{
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(6, OUTPUT);
}
void loop()
{
  digitalWrite(2, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(6, LOW);
  delay(4000); // Wait for 4000 millisecond(s)
  digitalWrite(2, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(6, LOW);
  delay(4000); // Wait for 4000 millisecond(s)
  digitalWrite(2, LOW);
  digitalWrite(4, LOW);
  digitalWrite(6, HIGH);
  delay(4000); // Wait for 4000 millisecond(s)
}