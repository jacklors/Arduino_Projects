// C++ code
//Pequena simulação de um semáforo.
//Small simulation of a traffic light.
int ledred = 13;
int ledyellow = 12;
int ledgreen= 8;
int delayPeriod = 2000;//Short time, for in the yellow lights.
int delayPeriod2 = 6000;//Long Time, for the moving cars and red lights.
int button = 9;//light switch
int statebutton = 0;//Variable to save the light switch state.
void setup()
{
 pinMode (ledred,OUTPUT);//input and output designation.
  pinMode (ledyellow,OUTPUT);//input and output designation.
   pinMode (ledgreen,OUTPUT);//input and output designation.
  pinMode (button, INPUT);//input and output designation.
  
}

void loop()
{
 statebutton = digitalRead(button); //Read input(button) for switch state.
  
  if (statebutton == HIGH)  {//Condition structure for traffic light operation.
  
  digitalWrite(ledred, HIGH);
  delay(delayPeriod2); // 
  digitalWrite(ledred, LOW);
  
  digitalWrite(ledyellow, HIGH);
  delay(delayPeriod); // 
  digitalWrite(ledyellow, LOW);
  
  
  digitalWrite(ledgreen, HIGH);
  delay(delayPeriod2); // 
  digitalWrite(ledgreen, LOW);
  
  }else (statebutton == LOW);//Alert Condition for turn off traffic lights.
  
  digitalWrite(ledyellow,HIGH);
  delay(500);
  digitalWrite(ledyellow, LOW);
  delay(500);
  
  

}