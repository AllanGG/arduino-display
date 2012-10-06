#include <avr/io.h>
#include <util/delay.h>

#include "seven-segment.h"

int main(void) {
  initDisplay();

  int i = 0;
  while (1) {
    writeDigit(chars[(i >> 0) & 1], 3);
    writeDigit(chars[(i >> 1) & 1], 2);
    writeDigit(chars[(i >> 2) & 1], 1);
    writeDigit(chars[(i >> 3) & 1], 0);
    i++;
    if (i == 0xF) {
      i = 0;
    }
    _delay_ms(250);
  }
  return 0;
}
