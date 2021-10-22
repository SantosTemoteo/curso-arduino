// https://www.tinkercad.com/things/1PieNLPpla8-aula17/editel
// Usando motores DC com Arduino P1

#define motor 2

void setup() {
  pinMode(motor,OUTPUT);
  digitalWrite(motor,HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:

}

/*
   * Quando um motor é rotacionado de forma mecânica, gera energia através de indução. Se injetado tensão nele, ele gera trabalho(movimento).
   * 
   * Se gerar tensão é um ponto prejudicial para o circuito que estiver ligado a ele,
   * pois como ele não para de girar imediatamente cortando sua tensão, gerando uma carga, 
   * que se acumula e é DISSIPADA PARA O CIRCUITO EM FORMA DE TENSÃO DE PICO.
   * 
   * Para que isso  não ocorra, temos que alimenta-lo externamente.
   * 
   * 
   * Transistor liga/desliga motor através de chaveamento.
   * Se o pino base receber uma tensão, o transistor permite a passagem da corrente (circuito fechado).
   * Se o pino base não receber tensão, bloqueia passagem de corrente (circuito aberto).
   * 
 */
