// C++ code
//
#define Led_Vermelho 8
#define Led_Amarelo 9
#define Led_Verde 10

/////////////////////////////
//Funções de atualização de status dos LEDs Amrelo, Verde e Vermelho.
void Led_vermelho(int Delay)
{
    
   //Acendo o led Vermelho  
  digitalWrite(Led_Vermelho,HIGH);
  digitalWrite(Led_Amarelo,LOW);
  digitalWrite(Led_Verde,LOW);
  delay(Delay);

}

void Led_amarelo(int Delay)
{
  
  //Acendo o led Amarelo  
  digitalWrite(Led_Vermelho,LOW);
  digitalWrite(Led_Amarelo,HIGH);
  digitalWrite(Led_Verde,LOW);
  delay(Delay);  
  

}


void Led_verde(int Delay)
{
  
  //Acendo o led Verde  
  digitalWrite(Led_Vermelho,LOW);
  digitalWrite(Led_Amarelo,LOW);
  digitalWrite(Led_Verde,HIGH);
  delay(Delay); 


}
/////////////////////////////

void setup() 
{
  
pinMode(Led_Vermelho,OUTPUT);
pinMode(Led_Amarelo,OUTPUT);
pinMode(Led_Verde,OUTPUT);

  
}


void loop() 
{

Led_vermelho(1000);
Led_amarelo(1500);
Led_verde(2000);

}
