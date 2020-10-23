#define aux 100
#define aux2 250
#define aux3 500

//set pinos
const int led1 = 2;
const int led2 = 3;
const int led3 = 4;
const int led4 = 5;
const int led5 = 6;
const int led6 = 7;
const int led7 = 8;
const int led8 = 9;
const int led9 = 10;

const int button = 12;

//set variaveis
int estado = 0;
int guarda_estado = LOW;
int cont=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
  pinMode(led7,OUTPUT);
  pinMode(led8,OUTPUT);
  pinMode(led9,OUTPUT);
  pinMode(button,INPUT);
}

void loop() {
    // put your main code here, to run repeatedly:
  
  estado = digitalRead(button);
/*
  if(estado==HIGH){
    guarda_estado=!guarda_estado;
    delay(500);
    }
  */

  if(estado==HIGH){
    guarda_estado=!guarda_estado;
    if(guarda_estado==HIGH){
      cont++;
      delay(aux2);
      }
    }
  if(cont==1){
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,HIGH);
    digitalWrite(led6,HIGH);
    digitalWrite(led7,HIGH);
    digitalWrite(led8,HIGH);
    digitalWrite(led9,HIGH);
    delay(aux3);
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    digitalWrite(led7,LOW);
    digitalWrite(led8,LOW);
    digitalWrite(led9,LOW);
    delay(aux3);
  }
    if(cont==2){
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,HIGH);
    digitalWrite(led6,HIGH);
    digitalWrite(led7,HIGH);
    digitalWrite(led8,HIGH);
    digitalWrite(led9,HIGH);
    delay(aux2);
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    digitalWrite(led7,LOW);
    digitalWrite(led8,LOW);
    digitalWrite(led9,LOW);
    delay(aux2);
  }

    if(cont==3){
    digitalWrite(led1,HIGH);
    delay(aux);
    digitalWrite(led1,LOW);
    digitalWrite(led2,HIGH);
    delay(aux);
    digitalWrite(led2,LOW);
    digitalWrite(led3,HIGH);
    delay(aux);
    digitalWrite(led3,LOW);
    digitalWrite(led4,HIGH);
    delay(aux);
    digitalWrite(led4,LOW);
    digitalWrite(led5,HIGH);
    delay(aux);
    digitalWrite(led5,LOW);
    digitalWrite(led6,HIGH);
    delay(aux);
    digitalWrite(led6,LOW);
    digitalWrite(led7,HIGH);
    delay(aux);
    digitalWrite(led7,LOW);
    digitalWrite(led8,HIGH);
    delay(aux);
    digitalWrite(led8,LOW);
    digitalWrite(led9,HIGH);
    delay(aux);
    digitalWrite(led9,LOW);
    delay(aux);
  }
    if(cont==4){
    digitalWrite(led9,HIGH);
    delay(aux);
    digitalWrite(led9,LOW);
    digitalWrite(led8,HIGH);
    delay(aux);
    digitalWrite(led8,LOW);
    digitalWrite(led7,HIGH);
    delay(aux);
    digitalWrite(led7,LOW);
    digitalWrite(led6,HIGH);
    delay(aux);
    digitalWrite(led6,LOW);
    digitalWrite(led5,HIGH);
    delay(aux);
    digitalWrite(led5,LOW);
    digitalWrite(led4,HIGH);
    delay(aux);
    digitalWrite(led4,LOW);
    digitalWrite(led3,HIGH);
    delay(aux);
    digitalWrite(led3,LOW);
    digitalWrite(led2,HIGH);
    delay(aux);
    digitalWrite(led2,LOW);
    digitalWrite(led1,HIGH);
    delay(aux);
    digitalWrite(led1,LOW);
    delay(aux);
  }
  if(cont==5){
    digitalWrite(led1,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led7,HIGH);
    delay(aux2);
    digitalWrite(led1,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led7,LOW);
    digitalWrite(led2,HIGH);
    digitalWrite(led5,HIGH);
    digitalWrite(led8,HIGH);
    delay(aux2);
    digitalWrite(led2,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led8,LOW);    
    digitalWrite(led3,HIGH);
    digitalWrite(led6,HIGH);
    digitalWrite(led9,HIGH);
    delay(aux2);
    digitalWrite(led3,LOW);
    digitalWrite(led6,LOW);
    digitalWrite(led9,LOW);
    delay(aux2);  
  }
  if(cont==6){
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    digitalWrite(led7,LOW);
    digitalWrite(led8,LOW);
    digitalWrite(led9,LOW);
    delay(aux3);
    cont=0;
  }





  
}
