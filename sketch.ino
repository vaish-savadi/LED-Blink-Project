void setup() {
  pinMode(2, OUTPUT);  // Set GPIO2 as output
  Serial.begin(9600);
}

void loop() {
  digitalWrite(2, HIGH); 
   // LED ON
   Serial.println("led on");
  delay(1000);
  
  
  digitalWrite(2, LOW);   // LED OFF
  Serial.println("led off");
  delay(1000);
}

