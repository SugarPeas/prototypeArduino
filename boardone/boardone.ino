const int ledPin = 13; // the pin that the LED is attached to
int incomingByte;      // a variable to read incoming serial data into

void setup() {
  // initialize serial communication:
  Serial.begin(38400);
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // see if there's incoming serial data:
  if (Serial.available() > 0) {
    // read the oldest byte in the serial buffer:
    incomingByte = Serial.read();
    // if it's a capital S, turn on the LED:
    if (incomingByte == 'S') {
      digitalWrite(ledPin, HIGH);
    }
    // if it's an W turn off the LED:
    if (incomingByte == 'W') {
      digitalWrite(ledPin, LOW);
    }
  }
}
