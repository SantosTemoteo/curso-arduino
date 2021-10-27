// https://www.tinkercad.com/things/9BATnHSnO33-grand-lappi-blorr/editel?tenant=circuits
// Micro Servo Motor 9g SG90

#include <Servo.h>

#define pot A0
Servo s1; // declarar elemento do tipo servo
Servo s2;

int ang_s1; // ângulo
int ang_s2;
int a;

void setup() {
  s1.attach(2); // método indica qual porta de controle o servo esta ligado  
  ang_s1=0;
  s1.write(ang_s1); // write que faz o giro do servo
  // *1

  s2.attach(3);
  ang_s2=0;
  s2.write(ang_s2);
  Serial.begin(9600);
}

void loop() {
 ang_s1=map(analogRead(pot),0,1023,0,180); // Ler valor de pot e passar pro servo, até 180°
 s1.write(ang_s1); // Aplicar essa rotação ao servo
 delay(100); // ta muito lento, pega o delay do outro servo, n sei pq

 ang_s2=0;
 s2.write(ang_s2);
 a=s2.read();
 Serial.println(a);
 delay(3000);
 ang_s2=90;
 s2.write(ang_s2);
 a=s2.read();
 Serial.println(a);
 delay(3000);
 ang_s2=180;
 s2.write(ang_s2);
 a=s2.read();
 Serial.println(a);
 delay(3000);
}
/*
 * Relativo a ou motor elétrico, hidráulico ou de outra espécie que serve para converter um 
 * pequeno movimento em outro de maior força e amplitude.
 * 
 *  // *1 Quando se trabalha com porta analógica, não é necessário definir o pinMode, pois por padrão
 *        a porta analógica já é de entrada.
 */
