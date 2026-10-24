
const int leds[] = {13, 14, 16, 17, 18, 19, 21, 22};

void setup() {
  for (int i = 0; i < 8; i++)
    pinMode(leds[i], OUTPUT);
}

void loop() {
  for (int i = 0; i < 8; i++)
    digitalWrite(leds[i], HIGH);

  delay(1000);

  for (int i = 0; i < 8; i++)
    digitalWrite(leds[i], LOW);

  delay(1000);
}
