/*
Use this script to count the # of failed logon attempts on a system through command prompt.
*/

#include "DigiKeyboard.h"

void setup() {
  pinMode(1,OUTPUT);
}

wevtutil qe "Security" /q:"*[System[(EventID=4625)]]": This part queries the security log for all instances of Event ID 4625.
| find /c "<EventID>4625</EventID>": This pipes the output to the find command, which counts (/c) how many times the specific text string <EventID>4625</EventID> appears in the output.


void loop() {
  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0); /*Releases all held keys, ensuring the script starts with a clean slate.*/
  DigiKeyboard.delay(500); /*Pauses for 400 milliseconds or 4 seconds*/
  DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT); /*Simulates pressing the Windows Key + R. This opens the "Run" dialog box in Windows*/
  DigiKeyboard.delay(500);
  DigiKeyboard.println("cmd /K mode"); /*Types cmd /k mode into the Run box and presses Enter. This opens a Command Prompt window and uses the /k switch (keep open) so subsequent commands are typed into this persistent black window rather than opening a new Run dialog box*/  
  DigiKeyboard.delay(2000);
  DigiKeyboard.println("wevtutil qe "Security" /q:"*[System[(EventID=4625)]]" | find /c "<EventID>4625</EventID>""); /*This command uses find filter to count the occurrences of Event ID 4625. It queries the entire security log, filters for the specific ID, and counts the matches. If you'd like to see the command that displays the details for you, please let me know on LinkedIn or Discord*/
  DigiKeyboard.delay(1000000);
  DigiKeyboard.println("cls"); /*Clears CMD scripts*/
  DigiKeyboard.delay(2000);
  DigiKeyboard.println("exit"); /*Exits CMD*/

  DigiKeyboard.delay(100000); /*Pauses for 100 seconds*/
  digitalWrite(1,HIGH); /*Turns oh the LED*/
  DigiKeyboard.delay(50);
  digitalWrite(1,LOW); /*Turns off the LED*/
  DigiKeyboard.delay(200);
}
