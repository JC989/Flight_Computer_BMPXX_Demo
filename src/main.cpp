#include "altimeter.h"
#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  setupBMP();
  if(!setupBMP()){
    Serial.println("Could not find a valid Altimete, check wiring!");
  }
  else{
    Serial.println("Altimeter sensor found!");
  }

  flightPhase runOnPad(uint32_t tick);
  flightPhase runAscending(uint32_t tick);
  flightPhase runDescending(uint32_t tick);
  flightPhase runPostFlight(uint32_t tick);
}

void loop() {
  // put your main code here, to run repeatedly:
  statis unit32_t tick = 0;

  switch(status){
    case ONPAD:
      status = runOnPad(tick);
      break;
    case ASCENDING:
      status = runAscending(tick);
      break;
    case DESCENDING:
      status = runDescending(tick);
      break;
    case POST_FLIGHT:
    default:
      status = runPostFlight(tick);
    }
    tick++;
  }
  

}
