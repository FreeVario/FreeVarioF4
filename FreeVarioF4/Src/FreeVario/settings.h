/*
 FreeVario http://FreeVario.org

  Copyright (c), PrimalCode (http://www.primalcode.org)
  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  any later version. see <http://www.gnu.org/licenses/>
*/


#ifndef SETTINGS_H_
#define SETTINGS_H_
#include "stdbool.h"

void getDefaultConfig();
void setupConfig();

typedef struct {
  int eepromSaveVersion;
  float qnePressure;
  int sinkAlarmLevel;
  bool SerialOut;
  bool SerialOutBT;
  bool SerialOutESP;
  bool SerialOutUSB;
  bool ptas1;
  bool lxnav;
  bool pcprobe; //
  bool xcs; //
  int variosmooth;
  bool buzzer;
  int SoarDeadBandTime;
  int advTriggerLevel;
  int advTriggerTime;
  int advRelaxTime;
  int advMinSmooth;
  int advMaxSmooth;
  int gliderSinkRate;

} settings_t;

extern settings_t conf;






#endif /* SETTINGS_H_ */
