// https://www.tinkercad.com/things/cBgM6oEm6l7-copy-of-aula26/editel?tenant=circuits
// Braço robótico

#include <Servo.h>

#define pot1 A0
#define pot2 A1
#define pot3 A2
#define pot4 A3

Servo s1, s2, s3, s4;

int angs1, angs2, angs3, angs4;
int tmp=1000;

void setup() {
  s1.attach(2);
  s2.attach(3);
  s3.attach(4);
  s4.attach(5);
  Serial.begin(9600);
}

void loop() {
  angs1 = map(analogRead(pot1), 0, 1023, 0, 180);
  angs2 = map(analogRead(pot2), 0, 1023, 0, 180);
  angs3 = map(analogRead(pot3), 0, 1023, 0, 180);
  angs4 = map(analogRead(pot4), 0, 1023, 0, 180);

  //s1.write(angs1);
  //s2.write(angs2);
  //s3.write(angs3);
  //s4.write(angs4);
  //servosPos();

  p1();
  delay(tmp);
  p2();
  delay(tmp);
  p3();
  delay(tmp);
  p4();
  delay(tmp);
  p5();
  delay(tmp);
  p6();
  delay(tmp);
  p7();
  delay(tmp);
  delay(100);
}

void servosPos(){
  Serial.println("---------------------------------");
  Serial.print(s1.read());
  Serial.print(" - ");
  Serial.print(s2.read());
  Serial.print(" - ");
  Serial.print(s3.read());
  Serial.print(" - ");
  Serial.println(s4.read());
  Serial.println("---------------------------------");
}
//s1=Garra | 53=aberta | 140=fechada
//s2=braço2 | 176=esticado | 77=dobrado
//s3=braço1 | 85=cima | 150=baixo
//s4=base | 8=direita | 90=frente | 170=esquerda

void p1(){ // padrão - garra fechada
  s1.write(140);
  s2.write(167);
  s3.write(74);
  s4.write(97);
  servosPos();
}

void p2(){ // padrão - garra aberta
  s1.write(53);
  s2.write(167);
  s3.write(74);
  s4.write(97);
  servosPos();
}

void p3(){ // padrão - garra fechada
  s1.write(53);
  s2.write(111);
  s3.write(118);
  s4.write(97);
  servosPos();
}

void p4(){ // padrão - garra fechada
  s1.write(140);
  s2.write(111);
  s3.write(118);
  s4.write(97);
  servosPos();
}

void p5(){ // padrão - garra fechada
  s1.write(140);
  s2.write(167);
  s3.write(74);
  s4.write(178);
  servosPos();
}

void p6(){ // padrão - garra fechada
  s1.write(140);
  s2.write(111);
  s3.write(118);
  s4.write(178);
  servosPos();
}

void p7(){ // padrão - garra fechada
  s1.write(53);
  s2.write(111);
  s3.write(118);
  s4.write(176);
  servosPos();
}

/* Serial dos potenciômetros servem para pegar as posições dos servos,
 * depois jogar nos padrões.
 */
