const int fsrPin = A0;
const int ledPin = 9;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int fsrValue = analogRead(fsrPin);

  int brightness = map(fsrValue, 0, 1023, 0, 255);
  analogWrite(ledPin, brightness);

  delay(100);
}
