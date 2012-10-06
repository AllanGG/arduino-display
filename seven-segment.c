#include <avr/io.h>
#include <util/delay.h>

#include "seven-segment.h"

int main(void) {
  initDisplay();

  writeDigit(1, 0);
  while (1) {
    _delay_ms(100);
  }
  return 0;
}
