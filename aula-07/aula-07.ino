// https://www.tinkercad.com/things/8AFd0lIysdB-aula07

#define led1 4
#define btn1 3
#define led2 7
#define btn2 6

void setup(){
  pinMode(led1,OUTPUT);
  pinMode(btn1,INPUT);
  pinMode(led2,OUTPUT);
  pinMode(btn2,INPUT);
}

void loop() {
  
  if(digitalRead(btn1) == HIGH){
    digitalWrite(led1,HIGH);  
  }else{
    digitalWrite(led1,LOW);
  }
  
  if(digitalRead(btn2) == HIGH){
    digitalWrite(led2,HIGH);  
  }else{
    digitalWrite(led2,LOW);
  }
}
