void setup() {
  pinMode(13,OUTPUT); //método que define o estado do pino (módo da porta).   OUTPUT = Saída  - INPUT = Entrada.

}

void loop() { // Definir o Estado da porta(HIGH or LOW)
  digitalWrite(13,HIGH); // HIGH=Ligada(Fornecendo 5v(Saída))   -   LOW=Desligada(0v.   LED ligado ao pino 13 vai acender.
  delay(2000); // 2000 miliseconds = 2s
  digitalWrite(13,LOW); // Após 2s por a porta 13 em LOW
  delay(2000);  // Aguardar mais 2s. e assim fica o código
}
