#define led 4
#define btn 3
int btn_up = 0;
int btn_dwn = 0;

void troca_led(){ // função troca estado do led
  if(digitalRead(led) == HIGH){ // lê a porta do led e verifica se ele ta em HIGH
    digitalWrite(led,LOW);
  }else{
    digitalWrite(led,HIGH);
  }
}

void key_up(){ // controla o estado do botão
  if((btn_up == 1) and (btn_dwn == 1)){
    btn_up = 0;
    btn_dwn = 0;
    troca_led();
  }
}

void setup() {
  pinMode(led,OUTPUT); // definir o modo do led e botão se é de entrada ou saída
  pinMode(btn,INPUT);

}

void loop() {
  if (digitalRead(btn) == HIGH){
    btn_up = 1;
    btn_dwn = 0;
    }else{
      btn_dwn = 1;
    }
  key_up();
}
