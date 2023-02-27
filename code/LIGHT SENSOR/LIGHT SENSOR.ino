#define LDR_PIN A0
#define DARK_LIMIT 80

void setup() {
  Serial.brgin(9600);
}

void loop() {
  int lightIntensity = analogRead(A0);

  // map the value from 0, 1023 to 0, 100
  int scaledValue = map(raw_light, 0, 1023, 0, 100);
  Serial.println(lightIntensity);

  if (scaledValue >= DARK_LIMIT) {
    // TODO: Do your operation here
  }
}
