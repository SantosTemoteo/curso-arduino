
// https://www.tinkercad.com/things/1dugNqdj5Bi-exquisite-bigery-wluff/editel
// LDR com potenciômetro

#define ldr A0
#define led 2

int vldr=0; // receber um valor de leitura do LDR, escopo global declara-se só 1 vez (não no loop)

void setup() {
  pinMode(ldr, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);       // monitor serial
}

void loop() {
  vldr=analogRead(ldr);
  if(vldr<700){         // valor de Luminosidade, < ou > muda o sentudo
    digitalWrite(led,LOW);
  }else{
    digitalWrite(led, HIGH);
  }
  Serial.println(vldr);
  delay(100);

}

// ajusta a sensibilidade do LDR com o potenciômetro
