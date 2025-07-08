// Define an array to store LED pin numbers
int leds[] = {2, 3, 4, 5, 6, 7, 8, 9};

void setup() {
  // Set all pins as OUTPUT using loop
  for (int i = 0; i < 8; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  // Phase 1: First 4 LEDs ON, last 4 LEDs OFF
  for (int i = 0; i < 8; i++) {
    if (i < 4) {
      digitalWrite(leds[i], HIGH); // Turn ON first 4
    } else {
      digitalWrite(leds[i], LOW);  // Turn OFF last 4
    }
  }
  delay(500); // Wait 1 second

  // Phase 2: First 4 LEDs OFF, last 4 LEDs ON
  for (int i = 0; i < 8; i++) {
    if (i < 4) {
      digitalWrite(leds[i], LOW);  // Turn OFF first 4
    } else {
      digitalWrite(leds[i], HIGH); // Turn ON last 4
    }
  }
  delay(500); // Wait 1 second
}
