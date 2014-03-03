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
    // if it's a capital A , turn on the LED:
    if (incomingByte == 'a') {
      digitalWrite(ledPin, HIGH);
    }
    // if it's an Q turn off the LED:
    if (incomingByte == 'q') {
      digitalWrite(ledPin, LOW);
    }
  }
}
