#include <avr/io.h>
#include <util/delay.h>

#include "seven-segment.h"

int main(void) {
  initDisplay();

  int i = 0;
  while (1) {
    for (int j = 0; j < 8; j++) {
      writeDigit(1 << j, i);
      _delay_ms(150);
    }
    i++;
    if (i == 4) {
      i = 0;
    }
  }

  return 0;
}
