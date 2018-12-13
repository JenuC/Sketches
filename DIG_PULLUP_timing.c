
/*
OUTPUT DURATION CALCULATED BY MEASURING TIME ONBOARD
MEANT TO WORK WITH BUTTON PUSHES
BASED ON  https://forum.arduino.cc/index.php?topic=448389.0
          http://www.crossroadsfencing.com/BobuinoRev17/
*/

byte button =2;
unsigned long startTime;
unsigned long endTime;
unsigned long duration;
byte timerRunning;

void setup(){
pinMode (button, INPUT_PULLUP);
Serial.begin(115200);
}
void loop(){
  if (timerRunning == 0 && digitalRead(button) == LOW){ // button pressed & timer not running already
  startTime = micros();
  timerRunning = 1;
  }
  if (timerRunning == 1 && digitalRead(button) == HIGH){ // timer running, button released
  endTime = micros(); // millis();
  timerRunning = 0;
  duration = endTime - startTime;
  //Serial.print ("button press time in micro seconds: ");
  Serial.println (duration);
  //Serial.println("\n");
  }
}
