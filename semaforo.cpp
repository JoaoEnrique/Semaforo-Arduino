int ledVerde = 7;
int cor = 0;

void setup()
{
 pinMode(ledVerde, OUTPUT);
 pinMode(10, OUTPUT);
 pinMode(13, OUTPUT);
}


void loop()
{
  cor++;
  if(cor==1)
  { 
  //acende LED Verde
  Serial.println("VERDE");
  digitalWrite(ledVerde, HIGH);
  delay(4000);

  
  //desliga led Verde
  digitalWrite(ledVerde, LOW);
  delay(500);
  }
  
  if(cor==2)
  { 
  //acende LED Amarelo
  Serial.println("Amarelo");
  digitalWrite(10, HIGH);
  delay(2000);
  
  //desliga led Amarelo
  digitalWrite(10, LOW);
  delay(500);
  }
  
  if(cor==3)
  { 
  //acende LED Vermelho
  Serial.println("VERMELHO");
  digitalWrite(13, HIGH);
  delay(3000);
  
  //desliga led Vermelho
  digitalWrite(13, LOW);
  delay(500);
  }
  
  if(cor==4)
  {
    cor=0;
  } 
}
