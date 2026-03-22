// 15 seconds version
// #include "DigiKeyboard.h"

// void setup() {
//   pinMode(1, OUTPUT);
// }

// void loop() {
//   DigiKeyboard.sendKeyStroke(0);
//   DigiKeyboard.delay(1000);

//   DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
//   DigiKeyboard.delay(1000);

//   DigiKeyboard.println("https://www.youtube.com/watch?v=Aq5WXmQQooo");

//   DigiKeyboard.delay(100000);
// }

// 3:20 version and then it starts itself over again
#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(1000);

  // Open Run ONCE
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(1000);

  // Open YouTube ONCE
  DigiKeyboard.println("https://www.youtube.com/watch?v=dQw4w9WgXcQ");

  // Wait for browser + page load
  DigiKeyboard.delay(10000);

  // Let video auto-start
  DigiKeyboard.delay(3000);

  // Fullscreen ONCE
  DigiKeyboard.sendKeyStroke(KEY_F);
}

void loop() {
  // Wait until ~3:20 of playback
  DigiKeyboard.delay(200000);

  // Restart video ONLY (no new window, no play toggle)
  DigiKeyboard.sendKeyStroke(KEY_0);

  // Give time to seek and auto-resume
  DigiKeyboard.delay(4000);
}