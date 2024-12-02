#include <SoftwareSerial.h>
SoftwareSerial EMBED(1,0); 

char val;

int mi1 = 2;
int md1 = 3;
int mi2 = 4;
int md2 = 5;
int mi3 = 6;
int md3 = 9;
int mi4 = 10;
int md4 = 11;

int relay1 = 7;
int relay2 = 8;
int relay3 = 12;
int relay4 = 13;

void setup(){
  EMBED.begin(9600);   
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  pinMode(relay3, OUTPUT);
  pinMode(relay4, OUTPUT);   

  
  pinMode(mi1, OUTPUT);
  pinMode(md2, OUTPUT);
  pinMode(mi2, OUTPUT);
  pinMode(md2, OUTPUT);   
  pinMode(mi3, OUTPUT);
  pinMode(md3, OUTPUT);
  pinMode(mi4, OUTPUT);
  pinMode(md4, OUTPUT);   
}

void loop(){

if(EMBED.available()){ 
  val = EMBED.read();  
  
  //Encendido Relay
  
  if(val == 'A'){
  digitalWrite(relay1, HIGH);
  }
  if(val == 'C'){
  digitalWrite(relay2, HIGH);
  }
  if(val == 'E'){
  digitalWrite(relay3, HIGH);
  }
  if(val == 'G'){
  digitalWrite(relay4, HIGH);
  }

  //Apagado Relay

  if(val == 'B'){
  digitalWrite(relay1, LOW);
  }
  if(val == 'D'){
  digitalWrite(relay2, LOW);
  }
  if(val == 'F'){
  digitalWrite(relay3, LOW);
  }
  if(val == 'H'){
  digitalWrite(relay4, LOW);
  }

  //Encendido Puente H

  if(val == 'I'){
  digitalWrite(mi1, LOW);
  digitalWrite(md1, LOW);
  }
  if(val == 'J'){
  digitalWrite(mi1, HIGH);
   digitalWrite(md1, LOW);
  }
  if(val == 'K'){
  digitalWrite(md1, HIGH);
  digitalWrite(mi1, LOW);
  }

  if(val == 'L'){
  digitalWrite(mi2, LOW);
  digitalWrite(md2, LOW);
  }
  if(val == 'M'){
  digitalWrite(mi2, HIGH);
   digitalWrite(md2, LOW);
  }
  if(val == 'N'){
  digitalWrite(md2, HIGH);
  digitalWrite(mi2, LOW);
  }

  if(val == 'O'){
  digitalWrite(mi3, LOW);
  digitalWrite(md3, LOW);
  }
  if(val == 'P'){
  digitalWrite(mi3, HIGH);
   digitalWrite(md3, LOW);
  }
  if(val == 'Q'){
  digitalWrite(md3, HIGH);
  digitalWrite(mi3, LOW);
  }

  if(val == 'R'){
  digitalWrite(mi4, LOW);
  digitalWrite(md4, LOW);
  }
  if(val == 'S'){
  digitalWrite(mi4, HIGH);
   digitalWrite(md4, LOW);
  }
  if(val == 'T'){
  digitalWrite(md4, HIGH);
  digitalWrite(mi4, LOW);
  } 
}
}
