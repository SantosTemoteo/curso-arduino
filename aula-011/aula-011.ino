// https://www.tinkercad.com/things/62fIJ4eXqcp-aula11/editel
// https://www.tinkercad.com/things/9iO7M8h6y1L-aula11-circuito-2/editel
//Função map

int leds[]={2,3,4,5,6,7};   // {} = Inicialização uniforme, valores dentro são as portas.
#define pot A0
int val;

void setup() {
  for(int i=0; i<6; i++){  // ?
    pinMode(leds[i], OUTPUT);
    }
  pinMode(pot, INPUT);
}

void acender(int x){  // acende de leds[0] a leds[5]; e de leds[5] até o final apaga.
    int i;
    for(i=0; i<x; i++){   // de 0 até x ;
        digitalWrite(leds[i], HIGH);
      }
    for(i=x; i<6; i++){   // de x até o final do array .
        digitalWrite(leds[i], LOW);
      }
}

void loop() {

  val = analogRead(pot);

                                // saída relacionada a QUAL VALOR PASSAR PADA A FUNC. ACENDER
  
  acender(map(val,0,1023,0,6)); // chamada para a função, retorno da func. map irá para func. acender
  
}



/* Função recebe 5 parâmetros:
 *        1º      2º          3º             4º         5º
 *  map(valor,min_entrada, max_entrada, main_saida, max_saida)
 *  map(valor, 0, 1023, 0, 255)
 *  
 *    1º = Valor de entrada (valor que será corelacionado com as faixas indicadas)
 *    2º e 3º = Relacionado as faixa de entrada (Ex: ANALOG IN: 0-1023)
 *    4º e 5º = Relacionado a faixa de saída (Ex: ANALOG IN convert to PWM: 0-255)
 *    codigo 1 na aula 11 - 1 do thinker
 */   
