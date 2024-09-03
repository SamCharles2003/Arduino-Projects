
int left_sensor = 2;
int right_sensor = 3;

int lm1 = 4;
int lm2 = 5;
int rm1 = 6;
int rm2 = 7;
void setup() {
  // put your setup code here, to run once:
  pinMode(left_sensor, INPUT);
  pinMode(right_sensor, INPUT);
  pinMode(lm1, OUTPUT);
  pinMode(lm2, OUTPUT);
  pinMode(rm1, OUTPUT);
  pinMode(rm2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int left_sensor_val = digitalRead(left_sensor);
  int right_sensor_val = digitalRead(right_sensor);
  if      (left_sensor_val == 1 && right_sensor_val == 1)
    forward();
  else if (left_sensor_val == 0 && right_sensor_val == 1)
    left();
  else if (left_sensor_val == 1 && right_sensor_val == 0)
    right();
  else if (left_sensor_val == 0 && right_sensor_val == 0)
    stop();
}

void forward() {
  digitalWrite(lm1,LOW);
  digitalWrite(lm2,HIGH);
  digitalWrite(rm1,LOW);
  digitalWrite(rm2,HIGH);
}

void left() {
  digitalWrite(lm1,HIGH);
  digitalWrite(lm2,LOW);
  digitalWrite(rm1,LOW);
  digitalWrite(rm2,HIGH);
}

void right() {
  digitalWrite(lm1,LOW);
  digitalWrite(lm2,HIGH);
  digitalWrite(rm1,HIGH);
  digitalWrite(rm2,0);
}

void stop() {
  digitalWrite(lm1,0);
  digitalWrite(lm2,0);
  digitalWrite(rm1,0);
  digitalWrite(rm2,0);
}
