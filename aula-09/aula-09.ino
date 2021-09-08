// https://www.tinkercad.com/things/hmro1u4UdEm-aula09
#define led_r 2
#define led_g 4
#define led_b 3
#define botao 7

class btn{    // vantagem, se tiver 10 botões, cria-se uma classe e instancia um objeto para cada um.
  public:     // membros públicos
    int btn_on,btn_off,pino;       //funcionalidades da classe
    btn(int p){       // construtor da classe, parâmetros de dnetrada entre (). FOMRA CLÁSSICA de inicialização
      pino = p;    // propriedade pino recebe  p
      btn_on = btn_off = 0;     //  
    }
    bool press(){ // método indica se botao pressionado ou não. returno bool
      if(digitalRead(pino)==HIGH){
        btn_on = 1;
        btn_off = 0;
        }else{
          btn_off = 1;  
        }
        if(btn_on == 1 && btn_off == 1){
          btn_on = 0;
          btn_off = 0;
          return true;      // indica que foi clicado
          }else{
            return false;     // indica botão NÃO foi clicado
            }
    }
  };

class cor{
public:
  int pino_r,pino_g,pino_b,ciclo,maximo;
  cor(int pr,int pg,int pb):pino_r(pr),pino_g(pg),pino_b(pb){ // usando lista de inicialização. :pinor(pr) = associação
    ciclo = 0;      // inicio do ciclo
    maximo = 3;     // max de cores
  }
  // func troca a cor do LED
  void troca_led(){
      if(ciclo == 0){
          cor_led(1,0,0);
        } else if(ciclo == 1){
          cor_led(0,1,0);
        } else if(ciclo == 2){
          cor_led (0,0,1);
        }
        ciclo++;
        if(ciclo > maximo-1){
          ciclo = 0;
          }
    }
  // func define cor do LED
private:
  void cor_led(int r, int g, int b){
      digitalWrite(pino_r,r); // HIGH == 1 | LOW == 0
      digitalWrite(pino_g,g);
      digitalWrite(pino_b,b);
    }
  
  };

    // para usar a classe, basta instanciar o obj
btn btn (botao);    // class btn; obj nome: btn; onde está ligado fisicamente o botão; (botao) = define
// btn btn2 (8);
// btn btn3 (9);
cor cor(led_r,led_g,led_b);     // definidas os objetos, declarados como globais

void setup() {
  pinMode(led_r,OUTPUT);
  pinMode(led_g,OUTPUT);
  pinMode(led_b,OUTPUT);
  pinMode(botao,INPUT);

}

void loop() {
  if(btn.press()){
    cor.troca_led();
  }
}
