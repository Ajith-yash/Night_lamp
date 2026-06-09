const int sensorPin = A0;
const int ledPin = 9;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int lightValue = analogRead(sensorPin);

  Serial.print("Light Value: ");
  Serial.println(lightValue);

  if (lightValue < 500) {  // Dark
    digitalWrite(ledPin, HIGH);
  } else {                 // Bright
    digitalWrite(ledPin, LOW);
  }

  delay(100);
}
