/* FreqCount - Example with serial output
 * http://www.pjrc.com/teensy/td_libs_FreqCount.html
 * Unfortunately there will be no chance to integrate these libraries as all of them relies on H/W counters that the ESP8266 doesn't have.
 * This example code is in the public domain.
 */
#include <FreqCount.h>

void setup() {
  Serial.begin(57600);
  FreqCount.begin(1000);
}

void loop() {
  if (FreqCount.available()) {
    unsigned long count = FreqCount.read();
    Serial.println(count);
  }
}

