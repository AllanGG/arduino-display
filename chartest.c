#include <avr/io.h>
#include <util/delay.h>

#include "seven-segment.h"

int main(void) {
  initDisplay();

  int i = 0;
  while (1) {
    writeDigit(chars[i++], 0);
    _delay_ms(1000);
    if (i == 10) {
      i = 0;
    }
  }

  return 0;
}
