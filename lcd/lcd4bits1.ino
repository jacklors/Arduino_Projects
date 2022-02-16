// C++ code
/* ===============================================================================================================
  Projeto: Teste de um display
  Utilizado: Arduino UNO, Display e um potenciometro.

                           *****DESCRIÇÃO FUNCIONAMENTO*****
  Após ligado o arduino irá escrever uma mensagem no display lcd.
  ===============================================================================================================*/

// ========================================= Adicionando a biblioteca LCD  ================================================= //

#include <LiquidCrystal.h>//Adicionando a biblioteca lcd 
LiquidCrystal lcd (12,13,4,5,6,7);// Declarando a portas pin de acordo com a referencias do display lcd.
//                (R2,E,DB4,DB5,DB6,DB7).

// ================================== Variáveis e Constantes (Globais) ============================================ //

int numlin = 2;//Variavel para o numero de linhas.
int numcol = 16;//Variavel para o numero de colunas.
int i = 0;//
void setup()
{

  lcd.begin(numlin,numcol);//Iniciando(begin) o lcd.
  lcd.clear();//Adicionando comando para limpar oque tiver durante a iniciação.
  
  
}

void loop()
{
  lcd.setCursor(0,0);//Posicionando inicio dos caracteres na linha do lcd.
  lcd.print("Arduino");//Escrevendo a mensagem para ser exibida no lcd.
  delay(1000);//Tempo de duração da mensagem no lcd.
  lcd.clear();//Comando para limpar o lcd.
  lcd.setCursor(0,1);//Reposicionando inicio dos caracteres na linha do lcd.
  lcd.print("Rules");//Escrevendo a mensagem para ser exibida no lcd.
  delay(1000);//Tempo de duração da mensagem no lcd.
  lcd.clear();//Comando para limpar o lcd. 
  
}
