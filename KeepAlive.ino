//Tested on DigiSpark 16.5mhz
#include <DigiKeyboard.h>
int screenTime=30000; //lock after 30 seconds

void setup() {
  delay(500); //time to allow program to upload
}

void loop() {
  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(MOD_CONTROL_LEFT,KEY_SPACE); //Probably wont cause issues
  delay(screenTime);
}
