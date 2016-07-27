int pinvalues[] = {0, 0, 0, 0, 0, 0, 0, 0};
int sincenote[] = {0, 0, 0, 0, 0, 0, 0, 0};


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
  int notes[] = {0, 0, 48, 49, 50, 51, 52, 53};
  int note = notes[pin];
  pinvalues[pin] = digitalRead(pin);
  if (pinvalues[pin] == 0 && sincenote[pin] == 0) {
    //Serial.println(String("playing note " + String(note)));
    usbMIDI.sendNoteOn(note, 50, 144);
    usbMIDI.sendNoteOff(note, 50, 144);
    sincenote[pin] = 1;
  }
  if (pinvalues[pin] == 1) {
    sincenote[pin] = 0;
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

