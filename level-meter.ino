int sensorValue = 0;  // variable to store the value coming from the sensor
int sensorPin = A0;    // select the input pin for the potentiometer

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);

  Serial.begin(9600);
}


void loop() {
  
  sensorValue = analogRead(sensorPin);

  if (sensorValue == 1023) {
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(9, LOW);
    sensorValue = analogRead(sensorPin);
  } else if (sensorValue > 0 && sensorValue <= 255) {
    digitalWrite(5, HIGH);
     digitalWrite(6, LOW);
    digitalWrite(9, LOW);
    sensorValue = analogRead(sensorPin);
  } else if (sensorValue > 255 && sensorValue <= 511) {
    digitalWrite(5, HIGH);
     digitalWrite(6, HIGH);
    digitalWrite(9, LOW);
    sensorValue = analogRead(sensorPin);
  } else if (sensorValue > 511 && sensorValue <= 767) {
    digitalWrite(5, HIGH);
     digitalWrite(6, HIGH);
     digitalWrite(9, HIGH);

    sensorValue = analogRead(sensorPin);
  }
  
  delay(1);
  Serial.print(sensorValue);
  
}
