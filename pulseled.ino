/**************************************************** 
*  Program: Pulse LEDS                              *
*  Purpose: Pulse up and down led brightness        *
*  From 0-255.                                      *
*  By: Jeaime Powell                                *
****************************************************/


// Arduino Uno Used for target 
int ledpin = 3;

int brightness = 0;
bool state = true;

void setup() {
  pinMode(ledpin, OUTPUT);

}

void loop() {
  if (brightness >= 255){
     state = false;
     decrease_brightness();    
  }
  else if (brightness < 255 && state == false){
    decrease_brightness();
  }
  else if (brightness < 255 && state == true){
     increase_brightness();
  }
  if (brightness == 0){
     state = true;
  }
  analogWrite(ledpin,brightness);
  delay(3);
}

void increase_brightness(){
  brightness++;
}

void decrease_brightness(){
  brightness--;
}
