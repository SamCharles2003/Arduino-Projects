  
char s;
int lmf = 4;
int lmb = 5;
int rmf = 6;
int rmb = 7;


void setup() {
 
pinMode(lmf,OUTPUT);
pinMode(lmb,OUTPUT);
pinMode(rmf,OUTPUT);
pinMode(rmb,OUTPUT);



Serial.begin(9600);
}

void loop() {
 

if(Serial.available() > 0){
  s = Serial.read();
  
  }
if (s=='F'){

  digitalWrite(rmf,HIGH);
  digitalWrite(lmf,HIGH);
  digitalWrite(rmb,LOW);
  digitalWrite(lmb,LOW);
  }
else if (s=='B'){
 

  digitalWrite(rmf,LOW);
  digitalWrite(lmf,LOW);
  digitalWrite(rmb,HIGH);
  digitalWrite(lmb,HIGH);
  }
else if (s=='R'){

  digitalWrite(rmf,HIGH);
  digitalWrite(lmf,LOW);
  digitalWrite(rmb,LOW);
  digitalWrite(lmb,HIGH);

  }
else if (s=='L'){
 
  digitalWrite(rmf,LOW);
  digitalWrite(lmf,HIGH);
  digitalWrite(rmb,HIGH);
  digitalWrite(lmb,LOW);
  }

else if(s=='S'){
  digitalWrite(rmf,LOW);
  digitalWrite(lmf,LOW);
  digitalWrite(rmb,LOW);
  digitalWrite(lmb,LOW);
  }

}
