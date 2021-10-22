// https://www.tinkercad.com/things/19pJ31wrcAG-copy-of-aula17/editel?tenant=circuits
// Usando motores DC com Arduino P2

#define motor 2
int tempo=2000;

void setup() {
  pinMode(motor,OUTPUT);
  

}

void loop() {
  digitalWrite(motor,HIGH);
  delay(tempo);
  digitalWrite(motor,LOW);
  delay(tempo);

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
   * -------------------------------------------------------------------
   * 
   * TIP-120
   * DIODO pra proteger o circuito, ligado ao coletor, se inverte a polaridade, bloqueia corrente
   * 
 */
