#include "LowPower.h"
#include <SPI.h>
#include <LoRa.h>

unsigned long s = 10;
int i;
void setup() {
  
}

void loop() {
  
  Serial.print("KMTEK");
  delay(5000);
  
  
  LoRa.begin(915E6);

  LoRa.end();
  delay(5000);
  LowPower.powerDown(SLEEP_8S, ADC_OFF, BOD_OFF);
  delay(5000);


  /*for(i=0;i<s;i++){


     LowPower.powerDown(SLEEP_1S, ADC_OFF, BOD_OFF);
    
  }*/



  
  
}
