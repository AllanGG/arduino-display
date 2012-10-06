#include <avr/io.h>
#include <util/delay.h>

#include "seven-segment.h"

int main(void) {
  initDisplay();

  int i = 0;
  while (1) {
    writeDigit(i++, 0);
    _delay_ms(500);
    i %= 0xFF;
  }

  return 0;
}
