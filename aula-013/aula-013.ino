//https://www.tinkercad.com/things/7VLPkrRYeNd-aula13/editel
//Sensor LDR, fotoresistor (light dependent resistor)

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
  if(vldr<900){         // valor de Luminosidade, < ou > muda o sentudo
    digitalWrite(led,LOW);
  }else{
    digitalWrite(led, HIGH);
  }
  Serial.println(vldr);
  delay(100);

}

/*
 * Com uma resistência variável como o potenciômetro, mas com a variação da resistência pela inscidência de luz sobre ele
 * por padrão, quando Maior a incidência de luz sobre ele, Menor a reistência.
 * 
 * Não tem polaridade, mas se inverte-lo no circuito, inverte seu Funcionamento.
 */
