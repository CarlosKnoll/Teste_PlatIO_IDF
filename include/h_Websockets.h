#ifndef Websockets_h
#define Websockets_h

#include "esp_sleep.h"
#include "driver/lp_io.h"
#include "driver/touch_pad.h"

extern bool memFree;
extern int operation; //Which operation is being requested by ws message?
extern uint64_t tag_INT; //Holds the last read RFID tag

#endif