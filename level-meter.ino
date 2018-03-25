int sensorValue = 0;  
int sensorPin = A0;    
int brightness = 0;

void setup() {
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  
  sensorValue = analogRead(sensorPin);

  if (sensorValue == 1023) {
    digitalWrite(9, LOW);
    sensorValue = analogRead(sensorPin);
  } else if (sensorValue <= 256) {
    digitalWrite(9, HIGH);
      brightness = brightness + sensorValue;
    sensorValue = analogRead(sensorPin);
  } else if (sensorValue <= 512) {
    digitalWrite(9, HIGH);
      brightness = brightness + sensorValue;
    sensorValue = analogRead(sensorPin);
  } else if (sensorValue <= 767) {
    digitalWrite(9, HIGH);
      brightness = brightness + sensorValue;
    sensorValue = analogRead(sensorPin);
  }
  
  delay(1);
  Serial.print(sensorValue);
  
}
