/*
   This program turns on the LED in pin 13 if a gesture is detected.
*/

int led = 13;

int event = 0;
// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  event = checkForEvent();
  //Blink once
  if (event == 1) {
    digitalWrite(led, HIGH);
    delay(1000);
    digitalWrite(led, LOW);
  //Blink 10 times rapidly
  } else if (event == 2) {
    for (int i = 0; i < 10; i++) {
      digitalWrite(led, HIGH);
      delay(100);
      digitalWrite(led, LOW);
    }
  }
  event = 0;
}
//Returns an integer corresponding to the detected gesture
int checkForEvent() {
  return 0;
}


