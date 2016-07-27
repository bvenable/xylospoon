# xylospoon
MIDI xylophone with Teensy and spoons

Uses Teensyduino (https://www.pjrc.com/teensy/teensyduino.html)

For now the master branch just does drums, the keyboard branch is for keys. I found that with Caustic, at least, if you leave a note held while holding the circuit closed (keeping the grounded spoon touching a spoon on a pin) it keeps retriggering the drum sample, which isn't what I want for playing drums. So I have different behavior. Eventually I will do things like have different sets of spoons for keys and drums, and/or switches to change from keys to drums, and/or different behaviors. But right now it's separate. Either works with up to 6 spoons on pins 2-7 and the "mallet" spoon wired to ground. It's easy to add more, change up the behavior, etc. I put the notes that correspond to each pin in an array so I could limit the keyboard to majors. Obviously all of that can be done however one would like. This is just meant to be raw material for anyone who wants to duplicate my efforts.

