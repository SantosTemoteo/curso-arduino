// https://www.tinkercad.com/things/ctfUCkk7ex1-exquisite-curcan/editel?tenant=circuits
// PonteH, motor DC girando nos dois sentidos, L293D

#define ve1m1 3
#define m1a 2
#define m1b 4
#define velm2 11
#define m2a 12
#define m2b 13
#define tmp 5000

int vel=255;

void setup() {
  pinMode(ve1m1,OUTPUT); // Todas as portas como Saída.
  pinMode(m1a,OUTPUT);
  pinMode(m1b,OUTPUT);
  pinMode(velm2,OUTPUT); 
  pinMode(m2a,OUTPUT);
  pinMode(m2b,OUTPUT);

  analogWrite(ve1m1,0); // Inicializa tudo do Zero.
  digitalWrite(m1a,LOW);
  digitalWrite(m1b,LOW);
  analogWrite(velm2,0); 
  digitalWrite(m2a,LOW);
  digitalWrite(m2b,LOW);

}

void loop() {
  // m1
  analogWrite(ve1m1,vel); // Define vel para 255
  digitalWrite(m1a,HIGH); // motor gira em um sentido 
  digitalWrite(m1b,LOW); //
  delay(tmp); // Durande esse tempo
// m2
  analogWrite(velm2,vel); 
  digitalWrite(m2a,LOW);  
  digitalWrite(m2b,HIGH);
  delay(tmp); 
  
// --------

   // m1                      // Inverte a seleção
  digitalWrite(m1a,LOW);
  digitalWrite(m1b,HIGH);
  // delay(tmp);
  // m2
  digitalWrite(m2a,HIGH);
  digitalWrite(m2b,LOW);
  delay(tmp);
}

/*
 * L293D - ponte H Dupla, controla até 2 motores
 * Arduino/Microcontroller - 2 e 7 - sentido do motor, um tem que estar HIGH e outro LOW
 * LOW + LOW = Motor parado.
 * HIGH + HIGH = Motor frenado ou "freiado" criando resistência ao giro.
 * 
 * pino 8 = entrada de alimentação da bateria; pino 16 entrada de alimentação do arduino.
 * pino 1 velocidade (PWM).
 */
