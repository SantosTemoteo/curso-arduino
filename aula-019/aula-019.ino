// https://www.tinkercad.com/things/0YKik6dOndn-copy-of-aula18/editel?tenant=circuits
// Controlando a rotação de motores DC com Arduino

#define pot A0
#define motor 3
#define tmp 10
int valpot = 0; // leitura do potenciômetro

void setup() {
  pinMode(motor,OUTPUT);
  pinMode(pot,INPUT);
}

void loop() {
  valpot=map(analogRead(pot),0,1023,0,255); // analog para PWM
  analogWrite(motor,valpot);
  delay(tmp);
}
