void setup() {
// initialize digital pin LED_BUILTIN as an output.
pinMode(9, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
digitalWrite(9, HIGH);   // turn the LED on (HIGH is the voltage level)
delay(40);                       // wait for a second
digitalWrite(9, LOW);    // turn the LED off by making the voltage LOW
delay(40);                       // wait for a second
                  // wait for a second
}
