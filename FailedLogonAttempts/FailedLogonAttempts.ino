#include "DigiKeyboard.h"

void setup() {
  pinMode(1, OUTPUT);
}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(1000);

  // Open Run
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(1500);

  // Open CMD
  DigiKeyboard.println("cmd");
  DigiKeyboard.delay(2000);

  // Query the Windows System Event Log, filter for Event ID 4625 (failed logon-related entries),
  // count the occurrences, and redirect the result into a text file on the user's Desktop
  DigiKeyboard.println("wevtutil qe \"System\" | find /c \"4625\" > \"C:\\Users\\%USERNAME%\\Desktop\\log_count.txt\"");
  
  // Wait so you can see result
  DigiKeyboard.delay(10000);

  // Clear and exit
  DigiKeyboard.println("cls");
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("exit");

  // Blink LED
  digitalWrite(1, HIGH);
  DigiKeyboard.delay(50);
  digitalWrite(1, LOW);

  // Stop repeating too fast
  DigiKeyboard.delay(60000);
}