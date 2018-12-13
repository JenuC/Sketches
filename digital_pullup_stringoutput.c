/* USE INPUT PULL UP TO WRITE A STRING INSTEAD OF DURATION OR TRIGGER */

byte button =2;
bool prev = LOW;

void setup(){
pinMode (button, INPUT_PULLUP);// logic is inversed
Serial.begin(115200);
}
void loop(){
  if (prev == LOW && digitalRead(button) == HIGH)
      {Serial.println ("X");}
  prev=digitalRead(button);  
}
