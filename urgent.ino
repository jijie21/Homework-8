void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(9, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(9, HIGH); 
  delay(15); 
  digitalWrite(9, LOW); 
  delay(100);             
  digitalWrite(9, HIGH);  
  delay(150);                       
  digitalWrite(9, LOW);    
  delay(10);  
  digitalWrite(9, HIGH);  
  delay(1200);                    
  digitalWrite(9, LOW);     
  delay(100);                  
  digitalWrite(9, HIGH);   
  delay(150);                      
  digitalWrite(9, LOW);    
  delay(10);  
}
