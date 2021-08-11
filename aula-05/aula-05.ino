// https://www.tinkercad.com/things/060V741DWvO-powerful-densor/editel?tenant=circuits

#define led 3
#define maximo 32
#define minimo 0
#define tmp 100

void setup() {
  pinMode(led,OUTPUT);
}

void loop() {
  for(int i=minimo;i<maximo;i++){
  analogWrite(led,i); // analogWrite trabalha com as portas analógicas ou as digitaisPWM
  // digitalWrite(led,HIGH);
  delay(tmp);
  }
  for(int i=maximo;i>minimo;i--){
  analogWrite(led,i);
  // digitalWrite(led,LOW);
  delay(tmp);
  }
  
}
