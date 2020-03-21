int ldr = 2; // connect ir sensor to arduino pin 2
int LED = 13; // conect Led to arduino pin 13



void setup() 
{



  pinMode (ldr, INPUT); // sensor pin INPUT
  pinMode (LED, OUTPUT); // Led pin OUTPUT
 
}

void loop()
{
  int statusSensor = digitalRead (ldr);
  
  if (statusSensor == 0)
  {
    digitalWrite(LED, LOW); // LED LOW
  }
  
  else
  {
    digitalWrite(LED, HIGH); // LED High
  }
  
}
