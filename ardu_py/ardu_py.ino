
int LED = 13;

void setup() {
 
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop() {
  
  char reading = Serial.read();
  
  if(reading == '1'){
    digitalWrite(LED, HIGH);
  }
  else if(reading == '0'){
    digitalWrite(LED, LOW);
  }
}
