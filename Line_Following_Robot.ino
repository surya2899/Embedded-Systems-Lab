int EnaA = 9; //setting speed of the motors
int EnaB = 3;  
int MotA1 = 7; //setting high or low for the motors
int MotA2 = 6; 
int MotB1 = 5; 
int MotB2 = 4; /


int Right = A0; //getting input from sensors
int Left = A1; 

void setup() {
  
pinMode(EnaA, OUTPUT); 
pinMode(EnaB, OUTPUT); 
pinMode(MotA1, OUTPUT); 
pinMode(MotA2, OUTPUT); 
pinMode(MotB1, OUTPUT); 
pinMode(MotB2, OUTPUT); 
pinMode(Right, INPUT); 
pinMode(Left, INPUT); 

}

void loop() {
  
if (analogRead(RI)<=35 && analogRead(LF)<=35) //checking threshold for white color
{
  
  analogWrite(EnaA, 100); 
  analogWrite(EnaB, 100); 
  
  digitalWrite(MotA1, LOW);
  digitalWrite(MotA2, HIGH);
  digitalWrite(MotB1, HIGH);
  digitalWrite(MotB2, LOW);
}
else if (analogRead(RI)<=35 && !analogRead(LF)<=35) 
{
  
  analogWrite(EnaA, 255); 
  analogWrite(EnaB, 255); 
  
  digitalWrite(MotA1, LOW);
  digitalWrite(MotA2, HIGH);

  digitalWrite(MotB1, LOW);
  digitalWrite(MotB2, HIGH);
}
else if (!analogRead(RI)<=35 && analogRead(LF)<=35) 
{ 
  
  analogWrite(EnaA, 255); //set right motors speed
  analogWrite(EnaB, 255); //set left motors speed

  digitalWrite(MotA1, HIGH);
  digitalWrite(MotA2, LOW);
  digitalWrite(MotB1, HIGH);
  digitalWrite(MotB2, LOW);
}
else if (!analogRead(RI)<=35 && !analogRead(LF)<=35) 
{ 
  
  analogWrite(EnaA, 0); 
  analogWrite(EnaB, 0); 
  digitalWrite(MotA1, LOW);
  digitalWrite(MotA2, LOW);
  digitalWrite(MotB1, LOW);
  digitalWrite(MotB2, LOW);
  }
}
