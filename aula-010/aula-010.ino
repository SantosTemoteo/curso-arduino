//https://www.tinkercad.com/things/7tvZPBtOvMF-aula-10/editel
// portas analógicas

#define an5 A5
void setup() {
  pinMode(an5,INPUT);   // ANALOG IN
  Serial.begin(9600);   // OUTPUT Console Monitor Serial; comando_serial.metodo_begin(parametro vel comuncação com a porta)
}

void loop() {
  Serial.println(analogRead(an5));     //retorna valor lido na porta indicada, impresso no console serial
  delay(100);
}


/*  1º - Porta de entrada ANALÓGICAS(As portas ANALÓGICAS do arduino são portas de ENTRADA).
 *    ANALOG IN: A0; A1; A2; A3; A4; A5.
 *    Onda ANALÓGICA == SENOIDAL
 *      Entre 0 e 5v(por exemplo) existe uma série de Variações; 1024 para ser exato, variando de 0 - 1023.
 *        Feita a relação (0-1023) com 0-5v
 *          0 = 0v
 *          256 = 1.25v
 *          512 = 2.5v
 *          768 = 3.75
 *          1023 = 5v
 *        
 *   2º - Onda Digital == PWM(PULSE WIDTH MODULATION) somente 0 OU 1
 *      Simulam as portas analógicas.
 *        PWM: 0-255 (256 variações) (1/4 da variação da porta analógica)
 *        Digital: 0 OU 5v (0 OU 1)
 *          
 *      Relação porta PWM com uma Analógica = valor ANALOG IN / 4
 *      
 *  Leitura Serial
 *    TX aceso: Indicativo da leitura da porta.
 *        Comunicação Serial:
 *    TX = Transmiter
 *    RX = Receiver
 *    
 *    full duplex:
 *    
 *    RX<--\  /-->RX
 *          \/
 *          /\
 *         /  \
 *    TX-->    \<--TX
 *    
 *    GND---------GND
 *    
 *    Se o código do monitor serial for diferente do delay(); dará ERRO
*/
