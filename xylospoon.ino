void setup()
{
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
}

void pintonote(int pin)
{
  int note;
  note = 58 + pin;
  if (digitalRead(pin)) {
    usbMIDI.sendNoteOff(note, 50, 144);
  } else {
    usbMIDI.sendNoteOn(note, 50, 144);
  }
}

void loop()
{
  int p;
  for (p = 2; p < 8; p++){
    pintonote(p);
  }
  delay(10);  
}

