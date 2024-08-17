const int trigPin = 9;
const int echoPin = 8;

long duration;
int distance;
void setup() {
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  pinMode(10,OUTPUT);
  Serial.begin(9600); // Starts the serial communication
}
void loop()
{
  beep(readUltrasonic());
}
int readUltrasonic() {
 
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;
  Serial.print("Distance: ");
  Serial.println(distance);
  return distance;
}
void beep(int distance)
{
  
  if (distance != 0) { // Make sure the distance measurement is valid
    int vibrationDuration = map(distance, 150, 10, 30,300);
    int beepintensity=map(distance, 150, 10, 1500,120);
    digitalWrite(10, HIGH);
    delay(vibrationDuration);
    digitalWrite(10, LOW);
     
  }
}