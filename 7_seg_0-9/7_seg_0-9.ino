//prueba display de 7 segmentos

int num;
bool state;
void setup() {
  
  pinMode(D2,OUTPUT);
  pinMode(D3,OUTPUT);
  pinMode(D4,OUTPUT);
  pinMode(D5,OUTPUT);
  pinMode(D6,OUTPUT);
  pinMode(D7,OUTPUT);
  pinMode(D8,OUTPUT);
}

void loop() {
 
    num++; 
  
    delay(1000); 

  if(num>9)num=0;
  
switch(num){
  case 0:
  digitalWrite(D2,HIGH);
  digitalWrite(D3,HIGH);
  digitalWrite(D4,HIGH);
  digitalWrite(D5,HIGH);
  digitalWrite(D6,HIGH);
  digitalWrite(D7,HIGH);
  digitalWrite(D8,LOW);
  break;
    case 1:
  digitalWrite(D2,LOW);
  digitalWrite(D3,HIGH);
  digitalWrite(D4,HIGH);
  digitalWrite(D5,LOW);
  digitalWrite(D6,LOW);
  digitalWrite(D7,LOW);
  digitalWrite(D8,LOW);
  break;
  case 2:
  digitalWrite(D2,HIGH);
  digitalWrite(D3,HIGH);
  digitalWrite(D4,LOW);
  digitalWrite(D5,HIGH);
  digitalWrite(D6,HIGH);
  digitalWrite(D7,LOW);
  digitalWrite(D8,HIGH);
  break;
    case 3:
  digitalWrite(D2,HIGH);
  digitalWrite(D3,HIGH);
  digitalWrite(D4,HIGH);
  digitalWrite(D5,HIGH);
  digitalWrite(D6,LOW);
  digitalWrite(D7,LOW);
  digitalWrite(D8,HIGH);
  break;
    case 4:
  digitalWrite(D2,LOW);
  digitalWrite(D3,HIGH);
  digitalWrite(D4,HIGH);
  digitalWrite(D5,LOW);
  digitalWrite(D6,LOW);
  digitalWrite(D7,HIGH);
  digitalWrite(D8,HIGH);
  break;
    case 5:
  digitalWrite(D2,HIGH);
  digitalWrite(D3,LOW);
  digitalWrite(D4,HIGH);
  digitalWrite(D5,HIGH);
  digitalWrite(D6,LOW);
  digitalWrite(D7,HIGH);
  digitalWrite(D8,HIGH);
  break;
    case 6:
  digitalWrite(D2,HIGH);
  digitalWrite(D3,LOW);
  digitalWrite(D4,HIGH);
  digitalWrite(D5,HIGH);
  digitalWrite(D6,HIGH);
  digitalWrite(D7,HIGH);
  digitalWrite(D8,HIGH);
  break;
    case 7:
  digitalWrite(D2,HIGH);
  digitalWrite(D3,HIGH);
  digitalWrite(D4,HIGH);
  digitalWrite(D5,LOW);
  digitalWrite(D6,LOW);
  digitalWrite(D7,LOW);
  digitalWrite(D8,LOW);
  break;
  case 8:
  digitalWrite(D2,HIGH);
  digitalWrite(D3,HIGH);
  digitalWrite(D4,HIGH);
  digitalWrite(D5,HIGH);
  digitalWrite(D6,HIGH);
  digitalWrite(D7,HIGH);
  digitalWrite(D8,HIGH);
  break;  
    case 9:
  digitalWrite(D2,HIGH);
  digitalWrite(D3,HIGH);
  digitalWrite(D4,HIGH);
  digitalWrite(D5,HIGH);
  digitalWrite(D6,LOW);
  digitalWrite(D7,HIGH);
  digitalWrite(D8,HIGH);
  break;
  }
}
