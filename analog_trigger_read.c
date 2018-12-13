
int sensorPin = A0;    // select the input pin for the potentiometer
int sensorValue = 0;

int switch1=0;
int prev_value=0 ;
void setup() {
  Serial.begin(115200);
}

void loop() {
  
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);
  
  float val= sensorValue * (5.0/1023);

  switch1=0;
  if(val>2.2)
    {switch1=0;    }
  else
  {switch1=1;} 

  if (switch1!=prev_value)
{  
  Serial.print("\n sensor = ");
  Serial.print(switch1);}
  prev_value=switch1;

  }
