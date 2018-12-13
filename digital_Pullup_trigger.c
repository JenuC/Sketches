/*
TO READ DIG IN and TRIGGER PERIOD
BASED ON EXAMPLE SKETCH @ http://www.arduino.cc/en/Tutorial/InputPullupSerial
*/

void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP);
  pinMode(13, OUTPUT);}

void loop() 
{
int sensorVal = digitalRead(2); // Keep in mind the pullup means the pushbutton's  
                                // logic is inverted.
if (sensorVal == HIGH)  {digitalWrite(13, LOW); } 
else                    {digitalWrite(13, HIGH); }
}


