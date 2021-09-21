// https://www.tinkercad.com/things/60dwB6FVf4s-tremendous-stantia/editel?tenant=circuits
// Divisor de tensão Resistivo

#define an0 A0
void setup() {
  pinMode(an0, INPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println(analogRead(an0));
}

/*
 * Sensores coo ldr, temperatura, etc... que raviam a resistência em decorrencia de uma
 * de uma ação física, variam a RESISTÊNCIA  e não a tensão.
 * Sendo mais interessante a variação de tensão nas portas analógicas e PWM.
 * 
 * Varia a tensão alterando o valor de um dos resistores.
 *    V = Vin * (R2/(R1+R2))
 *    se forem iguais, a tensão de saída vai ser metade da tensão de entrada.
 */
