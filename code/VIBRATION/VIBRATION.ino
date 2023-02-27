int VIB_PIN = 7;

void setup() {
  pinMode(VIB_PIN, INPUT);
}

void loop() {
  int val = digitalRead(VIB_PIN);

  if (val == 1) {
    // TODO: Do your operation here
  } 
}