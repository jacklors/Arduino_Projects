// C++ code
//Pequena simulação de um semáforo.
int ledred = 13;
int ledyellow = 12;
int ledgreen= 8;
int delayPeriod = 2000;
int button = 9;
int statebutton = 0;
void setup()
{
 pinMode (ledred,OUTPUT);
  pinMode (ledyellow,OUTPUT);
   pinMode (ledgreen,OUTPUT);
  pinMode (button, INPUT);
  
}

void loop()
{
  statebutton = digitalRead(button);
  
  if (statebutton == HIGH){
  
  digitalWrite(ledred, HIGH);
  delay(delayPeriod); // Wait for 2000 millisecond(s)
  digitalWrite(ledred, LOW);
  
  digitalWrite(ledyellow, HIGH);
  delay(delayPeriod); // Wait for 2000 millisecond(s)
  digitalWrite(ledyellow, LOW);
  
  
  digitalWrite(ledgreen, HIGH);
  delay(delayPeriod); // Wait for 2000 millisecond(s)
  digitalWrite(ledgreen, LOW);
  
  } else {

  
  }


}