#ifndef _used_pins_h_
#define _used_pins_h_
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

void initUsedPinsStruct();

uint16_t getUsedPinsInGPIOA();
uint16_t getUsedPinsInGPIOB();
uint16_t getUsedPinsInGPIOC();
uint16_t getUsedPinsInGPIOD();

void setUsedPinsInGPIOA(uint16_t pins);
void setUsedPinsInGPIOB(uint16_t pins);
void setUsedPinsInGPIOC(uint16_t pins);
void setUsedPinsInGPIOD(uint16_t pins);

void pullUpUnusedPins();

#ifdef __cplusplus
}
#endif

#endif //_used_pins_h_
