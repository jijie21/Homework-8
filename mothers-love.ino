int led = 9;           // the PWM pin the LED is attached to
int brightness = 0;    // how bright the LED is
int fadeAmount = 50;  

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(9, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  
  digitalWrite(9, HIGH);
  delay(300);
  digitalWrite(9, LOW);
  delay(100);
  analogWrite(led, brightness);
  brightness = brightness + fadeAmount;
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  digitalWrite(9, HIGH);
  delay(1000);
  digitalWrite(9, LOW);
  delay(10);
}
}
