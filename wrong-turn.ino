void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(5, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  for (int i = 0; i < 3; i++) {
digitalWrite(5, HIGH);
delay(300);
digitalWrite(5, LOW);
delay(300);
}
for (int j = 0; j < 10; j++) {
for (int k = 0; k < 20; k++) {
digitalWrite(5, HIGH);
delay(200-k*10);
digitalWrite(5, LOW);
delay(200-k*10);
}
}
}
