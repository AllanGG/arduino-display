#include <avr/io.h>
#include <util/delay.h>

#include "seven-segment.h"

unsigned char arke[4] = {
  0x77, // A
  0x50, // R
  0x76, // K
  0x79  // E
};

int main(void) {
  initDisplay();

  int i = 0;
  while(1){
    writeDigit(arke[i], i);
    i++;
    if (i == 4) {
      i = 0;
    }
    _delay_ms(2);
  }

  return 0;
}
