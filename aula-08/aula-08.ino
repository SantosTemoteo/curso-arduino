// link

#define led_r 2
#define led_b 3
#define led_g 4
#define btn 7
#define maximo 6 // quantas cores serão configuradas

int btn_on = 0;
int btn_off = 0; // 
int ciclo = 0; // indica qual cor o led vai acender

void red(){
    digitalWrite(led_r,1); // 1=HIGH 0=LOW 
    digitalWrite(led_b,0);
    digitalWrite(led_g,0);
  }

void blue(){
    digitalWrite(led_r,0);
    digitalWrite(led_b,1);
    digitalWrite(led_g,0);
}

void green(){
    digitalWrite(led_r,0);
    digitalWrite(led_b,0);
    digitalWrite(led_g,1);
}

void cian(){
    digitalWrite(led_r,0);
    digitalWrite(led_b,1);
    digitalWrite(led_g,1);
}

void yellow(){
    digitalWrite(led_r,1);
    digitalWrite(led_b,0);
    digitalWrite(led_g,1);
}

void magenta(){
    digitalWrite(led_r,1);
    digitalWrite(led_b,1);
    digitalWrite(led_g,0);
}
void troca_led(){
    if (ciclo == 0){
      red();
    }
    if (ciclo == 1){
      blue();
    }
    if(ciclo == 2){
      green();
    }
    if(ciclo == 3){
      cian();
    }
    if(ciclo == 4){
      yellow();
    }
    if(ciclo == 5){
      magenta();
    }
    ciclo++;
    if(ciclo > maximo-1){
      ciclo = 0;
    }
}

void verifica_btn(){
  if(digitalRead(btn) == HIGH){
    btn_on = 1;
    btn_off = 0;
  }else{
    btn_off = 1;
  }
  if((btn_off == 1)and(btn_off == 1)){
    btn_on = 0;
    btn_off = 0;
    troca_led();
  }
}

void setup() {
  pinMode(led_r,OUTPUT);
  pinMode(led_b,OUTPUT);
  pinMode(led_g,OUTPUT);
  pinMode(btn,INPUT);
}

void loop() {
  verifica_btn();
}
