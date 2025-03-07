int LED1 = 7, LED2 = 5, LED3 = 3;

void setup() {  // Correction de "steup" → "setup"
  Serial.begin(9600); // Correction de "serial" → "Serial"
  
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
}

void loop() {
  digitalWrite(LED1, HIGH);
  delay(2000);
  digitalWrite(LED1, LOW);

  digitalWrite(LED2, HIGH);
  delay(2000);
  digitalWrite(LED2, LOW);

  digitalWrite(LED3, HIGH);
  delay(3000);
  digitalWrite(LED3, LOW);
}
