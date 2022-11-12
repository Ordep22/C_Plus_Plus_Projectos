
//Quando instanciamos uma vairável nesta parte do código estamos estabelecendo uma variável global.


int LED01 = 10;

int LED02 = 11;

int LED03 = 12;

int D = 500;

char High = HIGH;

char Low = LOW;


int PiscaLed(a,b,c,d)
{
  
  
  digitalWrite(a,b);
  delay(d);
  digitalWrite(a,c);
  delay(d)  
  
  
}

void setup() {
  // put your setup code here, to run once:

  
 pinMod(LED01,OUTPUT);
 pinMod(LED02,OUTPUT);
 pinMod(LED03,OUTPUT);

 

}

void loop() {
  // put your main code here, to run repeatedly:


  
  PiscaLed(LED01,High,Low,Delay)


}
