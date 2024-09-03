  
char s;
int lmf = 11;
int lmb = 10;
int rmf = 9;
int rmb = 8;
int ena = 5;
int enb = 6;
int spd = 26;

void setup() {
 
pinMode(lmf,OUTPUT);
pinMode(lmb,OUTPUT);
pinMode(rmf,OUTPUT);
pinMode(rmb,OUTPUT);
pinMode(7,OUTPUT);


Serial.begin(9600);
}

void loop() {
 

if(Serial.available() > 0){
  s = Serial.read();
  
  }
if (s=='F'){
  analogWrite(ena,spd);
 analogWrite(enb,spd);
 digitalWrite(7,HIGH);
  digitalWrite(rmf,HIGH);
  digitalWrite(lmf,HIGH);
  digitalWrite(rmb,LOW);
  digitalWrite(lmb,LOW);
  }
else if (s=='B'){
 
  analogWrite(ena,spd);
 analogWrite(enb,spd);
 digitalWrite(7,HIGH);
  digitalWrite(rmf,LOW);
  digitalWrite(lmf,LOW);
  digitalWrite(rmb,HIGH);
  digitalWrite(lmb,HIGH);
  }
else if (s=='R'){
   analogWrite(ena,spd);
 analogWrite(enb,spd);
 digitalWrite(7,HIGH);
  digitalWrite(rmf,HIGH);
  digitalWrite(lmf,LOW);
  digitalWrite(rmb,LOW);
  digitalWrite(lmb,HIGH);

  }
else if (s=='L'){
 


    analogWrite(ena,spd);
 analogWrite(enb,spd);
 digitalWrite(7,HIGH);
  digitalWrite(rmf,LOW);
  digitalWrite(lmf,HIGH);
  digitalWrite(rmb,HIGH);
  digitalWrite(lmb,LOW);
  }

else if(s =='1'){
  spd = 26;
  }

else if(s =='2'){
  spd = 51;
  }

else if(s =='3'){
  spd = 77;
  }

else if(s =='4'){
  spd = 102;
  }

else if(s =='5'){
  spd = 128;
  }

else if(s =='6'){
  spd = 153;
  }

else if(s =='7'){
  spd = 179;
  }

else if(s =='8'){
  spd = 204;
  }

else if(s =='9'){
  spd = 230;
  }

else if(s =='q'){
  spd = 255;
  }

else if(s=='S'){
  digitalWrite(rmf,LOW);
  digitalWrite(lmf,LOW);
  digitalWrite(rmb,LOW);
  digitalWrite(lmb,LOW);
  }

}
