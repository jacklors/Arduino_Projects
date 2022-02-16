// C++ code
/* ===============================================================================================================
  Projeto: Utilizando um interruptor, vamos acionar um led para piscar constantemente.
  Utilizado: Arduino UNO, led e interruptor.

                           *****DESCRIÇÃO FUNCIONAMENTO*****
  Acende o led por 1 seg, e apaga por um 1seg, repetidamente, após acionamento o interruptor.
  ===============================================================================================================*/

// ================================== Variáveis e Constantes (Globais) ============================================ //

int ledred = 13;//Declaração da variavel(ledred), direcioando ela para a numeração da saída da placa.
int interruptor = 12;//Declaração da variavel(interruptor), direcioando ela para a numeração da saída da placa.
int estadointerruptor = 0;//Declaração da variavel (estadointerruptor), utilizada para logica condicional, para receber sinal do interrruptor.
void setup()
{
  pinMode(ledred, OUTPUT);//Declaração de qual modo será usada a porta 13(ledred), no caso saída(OUTPUT).
  pinMode(interruptor, INPUT);//Declaração de qual modo será usada a porta 12(interruptor), no caso saída(INPUT).
}

void loop()
{
  
  estadointerruptor = digitalRead(interruptor);//Leitura do sinal recebido.
  
  if(estadointerruptor == HIGH){
    
  digitalWrite(LED_BUILTIN, HIGH);//Vai ligar o led, HIGH VOLTAGE = 1(Sinal Digital)
  delay(1000); // Wait for 1000 millisecond(s), tempo em que o led vai ficar ligado.
  digitalWrite(LED_BUILTIN, LOW);//Vai desligar o led, LOW VOLTAGE = 0(Sinal Digital)
  delay(1000); // Wait for 1000 millisecond(s), tempo em que o led vai ficar desligado.
  }
}
