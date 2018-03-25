void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(9, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
for (int i = 0; i < 3; i++) {
digitalWrite(9, HIGH);
delay(400-i*2);
digitalWrite(9, LOW);
delay(400-i*2);
}
for (int b = 0; b < 20; b++) {
digitalWrite(9, HIGH);
delay(20);
digitalWrite(9, LOW);
delay(20);
}
}
