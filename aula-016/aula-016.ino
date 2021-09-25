// https://www.tinkercad.com/things/4bmEXpMqh18-ingenious-esboo-lahdi/editel?tenant=circuits
// Função CONSTRAIN

#define pot A0
void setup() {
  pinMode(pot, INPUT);
  Serial.begin(9600); // velocidade so monitor serial
}

void loop() {
  Serial.println(constrain(analogRead(pot), 500, 800)); // ler e imprimir valor analógico, já dentro da faixa determinada
  delay(250);
}

/*
 * Serve para Restringir uma Faixa de Leitura ou uma Faixa de Retorno. Ex:
 * 
 * constrain(valor_lido, min_saida, max_saida)
 * 
 *  sensor0 - 255 (PWM)
 *  faixa requerida: 150 - 200 (constrain):
 *  
 *  
 *  potenciômetro 0 - 1023 (ANALOG IN)
 *  faixa requerida:  500 - 800 (constrain)
 *  constrain(valor_pot, 500, 800)
 *  
 *   
 *  // usa-se quando o valor lido tem uma faixa determinada.
 *  // nada além de 800 nem aquém de 500 será mostrado no monitor serial.
 */
