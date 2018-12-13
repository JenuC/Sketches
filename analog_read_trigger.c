

int sensorPin = A0;    // select the input pin for the potentiometer
int sensorValue = 0;
int switch1=0;
int prev_value=0 ;
float val = 0.0;
bool use_SWITCH = true;

void setup(){
  Serial.begin(115200);
}

void loop(){
  
  sensorValue = analogRead(sensorPin);  
  val= sensorValue * (5.0/1023);
  
  if (use_SWITCH)
  {
    if(val>2.2) 
      switch1=0;  
    else 
      switch1=1;            
  
    if(switch1!=prev_value)       
    {  
        Serial.print("\n sensor = ");
        Serial.print(switch1);      
    }
    prev_value=switch1;
  }
  else                  
  {       
    Serial.print("\n");
    Serial.print(val);          
  }

}
 
    
