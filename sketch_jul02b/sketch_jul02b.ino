#include <Arduino.h>
#include <MeAuriga.h>

int hel;

MeRGBLed led_ring(0, 12);

void setup() {

  led_ring.setpin(44);
}

void loop() {

  hel = analogRead(13) / 5;

  led_ring.setColor(0, hel, 0, 0);
  led_ring.show();
  
}
