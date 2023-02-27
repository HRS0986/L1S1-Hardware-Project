#define IR_PIN 3;

void setup() {
  pinMode(IR_PIN, INPUT);
}

void   loop() {
  int value = digitalRead(IR_PIN);

  if(value == HIGH){ 
    
  }
  else{
    
  }
}
