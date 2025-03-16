#pragma once

#ifndef UNIT_TEST
#include "../lib/Adafruit_BMP3XX/Adafruit_BMP3XX.h"  // BMP388 library
#endif

class Adafruit_BMP3XX {

void bmpSetup();
void loop();

}