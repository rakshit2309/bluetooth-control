 // C++ code
//

char val;
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  Serial.begin(9600);

}


void loop ()
{ 
  while (Serial.available() > 0)
   {
    val = Serial.read();
    Serial.println(val);
   }
  switch (val)
  {
    case 'F': moveForward(); break;
    case 'B' : moveBackward();break;
    case 'L' : moveLeft(); break;
    case 'R' :  moveRight(); break;
    case  'S' :  Stop(); break;
  }
  
     

   /*  moveForward();
     delay(3000);utyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy
     moveRight();
     delay(1500);
      moveLeft();
     delay(1500); 
     
     moveBackward(); 
     delay(3000);
     */
 

     
}

void Stop()
{
   digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);  
  digitalWrite(5, LOW);
}
void moveForward()
{
     digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);  
  digitalWrite(5, HIGH);
}

void moveBackward()
{
    digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);  
  digitalWrite(5, LOW);
}
void moveLeft()
{
   digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);  
  digitalWrite(5, HIGH);
}

void moveRight()
{
   digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);  
  digitalWrite(5, LOW);
}

  
