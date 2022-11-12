
//Antes do void setup() e void loop() podemos estabelecer quais são nossas variáveis

int Led = 13;//Aqui estamos definindo qual variável estamos atribuido à posta 13

void setup() {
  // put your setup code here, to run once:

  pinMode(Led, OUTPUT); // A função pinMode serve para mostrar qual é a função daquele pino específico

}

void loop() {
  // put your main code here, to run repeatedly:

  //A função digitalWrite estabelece que a variável que indicada estará recebendo nível lógico alto ou baixo
  
  digitalWrite(Led,HIGH); // O parâmetro HIGH informa ao Arduino que é necessário enviar 5V ao pino LED(Pin 13).
  
  delay(500);//é informado ao arduino que seja aguardado 100ms até que próxima instrução seja executada
  
  digitalWrite(Led,LOW);// O parâmetro LOW informa ao Arduino que é necessário enviar 5V ao pino LED(Pin 13).
  
  delay(500);//é informado ao arduino que seja aguardado 100ms até que próxima instrução seja executada
  

}
