
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(9, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
for (int i = 0; i < 3; i++) {
digitalWrite(9, HIGH);
delay(300);
digitalWrite(9, LOW);
delay(300);
}
for (int b = 0; b < 20; b++) {
digitalWrite(9, HIGH);
delay(200-b*10);
digitalWrite(9, LOW);
delay(200-b*10);
}
}
