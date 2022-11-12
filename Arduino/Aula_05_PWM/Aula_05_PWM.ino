#define LED_01 13
#define LED_02 12
#define LED_03 11
#define maximo 255
#define minimo 0
#define Delay 500


void setup() {

pinMode(LED_01,OUTPUT);
pinMode(LED_02,OUTPUT);
pinMode(LED_03,OUTPUT);
  


}




void loop() {

  for (int i = minimo; i <= maximo; i+=5)
  {

    digitalWrite(LED_01,HIGH);
    analogWrite(LED_02,i);
    delay(Delay);
    
 
  } 
  
  digitalWrite(LED_01,LOW);

  for (int y = maximo; y >= minimo; y-=5)
  {
    
    digitalWrite(LED_03,HIGH);
    analogWrite(LED_02,y);
    delay(Delay);
    
    
   }
  
  digitalWrite(LED_03,LOW);
    

}
