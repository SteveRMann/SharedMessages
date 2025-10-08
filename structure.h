#ifndef STRUCTURE_H
#define STRUCTURE_H

/* Common data structure for all ESP-NOW senders & receivers used in the Halloween 2025 projects.
   In any ino file:
     #include <structure.h>
     messages myData;
*/

typedef struct {
  char senderMACStr[18];     // Formatted MAC string
  char uid[16];              // RFID UID string
  uint8_t buttonNumber;      // Keypad button number
  bool ledOnOff;             // Lantern LED state
} messages;

#endif
