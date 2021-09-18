//link
//Funcionamento da função map
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}

/*
 * Sintaxe de definição da função map:
 * 
 *  long map(long x, long in_min, long in_max, long out_min, long out_max){
 *    return(x-in_min)*(out_max - out_min)/(in_max - in_min) + out_min;
 *  }
 *  
 *  map(valor, faixa_in_min, faixa_in_max, faixa_out_min, faixa_out_max)
 *    
 *    valor = v. de entrada
 *    faixa de entrada
 *    faixa de saída
 *    
 *    ex:
 *    map(100, 0, 1023, 0, 255)
 *    
 *    Não necessariamente precisa começar do 0.
 *    
 *    100  = +-9,7% de 1024
 *    9,7% de 255 = +- 24,9 (25)
 *    
 *    (100-0)*(255-0)/(1024)+0
 *    (200)*(255)/(1024)+0
 *    25.500/1024
 *    24,9 = +-25 
 */
