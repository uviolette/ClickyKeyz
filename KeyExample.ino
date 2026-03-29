int button = 2;
int piezo = 8;

void setup() {
  pinMode(button, INPUT_PULLUP);
  pinMode(piezo, OUTPUT);
}

void loop() {
  if (digitalRead(button) == LOW) { 
    tone(piezo, 440);
  } else {
    noTone(piezo);
  }
}
