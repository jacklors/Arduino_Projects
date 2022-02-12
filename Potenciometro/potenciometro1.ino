// C++ code
//
byte ledArray [] = {13,12,11,10};//Variavel responsável pelos led's, declarada em arranjo(array) sequecial.
int ledDelay;//Variavel que vai receber o valor da variavel (pot).
int pot = A1;//Variavel que vai armazenar sinal analogico emitido pelo potenciometro.

void setup()
{
  Serial.begin(9600);//Para utilizar o monitor serial
  Serial.println(pot);//Utilizado para exibir pelo monitor serial o valor da variavvel (pot).
  for (int i = 0; i < 4; i++ ){//Estrtura para repetir a leitura de todas as saidas, acionando os led's.
  pinMode(ledArray[i], OUTPUT);//Atraves dos arranjos e com uma variavel(i), serve trafegar pelos indices acionando cada saida especifica. 
  }
}

void loop()
{
  Serial.println(ledDelay);
  ledDelay = analogRead(pot);//Designando a varaiavel (ledDelay) para receber atribuição do valor da leitura analogica (pot)emitida pelo potenciometro.
  
  
  for(int i = 0; i < 4; i++){////Estrtura para repetir a leitura de todas as saidas, acionando os led's.
  
  
  digitalWrite(ledArray[i], HIGH);//Acionando os led's.
  delay(ledDelay); //Contando o tempo....
  digitalWrite(ledArray[i], LOW);//Desligando os led's. 
  delay(ledDelay); //Contando o tempo....
    
  }
}