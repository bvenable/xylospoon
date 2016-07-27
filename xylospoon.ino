void setup()
{
  pinMode(2, INPUT_PULLUP);
}

void loop()
{
  if (digitalRead(2)) {
    usbMIDI.sendNoteOff(60, 50, 144);
  } else {
    usbMIDI.sendNoteOn(60, 50, 144);
  }
  delay(10);  
}

