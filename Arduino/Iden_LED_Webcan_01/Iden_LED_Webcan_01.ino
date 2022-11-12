void setup() {
  // put your setup code here, to run once:
  
  pinMode(10,OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:

  //Acendendo o LED vermelho por 250ms
  digitalWrite(10,HIGH);
  delay(1000);
  digitalWrite(10,LOW);
  delay(1000);
 
  //Acendendo o LED vermelho por 250ms
  digitalWrite(11,HIGH);
  delay(1000);
  digitalWrite(11,LOW);
  delay(1000);

  //Acendendo o Led amarelo por 250ms
  digitalWrite(12,HIGH);
  delay(1000);
  digitalWrite(12,LOW);
  delay(1000);
  
  //Acendendo o LED verde por 250ms 
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  delay(1000);


  //Todos ao mesmo tempo
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(13,HIGH);
  delay(1000);
  
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);
  delay(1000);
  

  

}
