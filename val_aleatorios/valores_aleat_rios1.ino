// C++ code

/* ===============================================================================================================
  Projeto: Testando função randon().
  Utilizado: Arduino UNO e led's.

                                     *****DESCRIÇÃO FUNCIONAMENTO*****
                                     
  Através da onda PWM, acionada pela função (analogWrite (pino, valor)), iremos variar a intesidade do brilho dos led's 
  com a utilização da onda quadrada com o duty cycle (ciclo de trabalho). 
  Essa variação da onda em duty cicle desta funçao(analogWrite), vai de 0 (sempre desligado) para 255(sempre ligado), 
  e para isso utilizaremos auxilio da função random(), para fazer essa variação de intesidade de forma randômica ou 
  aleatória.
  ===============================================================================================================*/



// ================================== Variáveis e Constantes (Globais) ============================================ //

int ledorange = 13;//Declaração de variaveis para atribuição da indentificação dos pinos, referente aos led's.
int ledblue = 12;
int ledgreen = 11;

void setup()
{ 
  Serial.begin(9600);
  pinMode(ledorange, OUTPUT);//Declaração de como será utilização dos pinos.
  pinMode(ledblue, OUTPUT);
  pinMode(ledgreen, OUTPUT);
}

void loop()
{

  
  Serial.println();
  analogWrite(ledorange, random(155));
  analogWrite(ledblue, random(155));
  analogWrite(ledgreen, random(155));         
  delay(100);
  
  
  
}
