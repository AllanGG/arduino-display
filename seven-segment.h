int chars[10] = {
  0x3F, // 0
  0x06, // 1
  0x5B, // 2
  0x4F, // 3
  0x66, // 4
  0x6D, // 5
  0x7D, // 6
  0x07, // 7
  0x7F, // 8
  0x6F  // 9
};

inline void initDisplay() {
  DDRD = 0xFF;
  DDRB = 0xFF;
  DDRC = 0xFF;
  return;
}

inline void writeDigit(unsigned char digit, unsigned char position) {
  unsigned char high, low, outp;
  high = ~digit & 0xF0;
  low = ~digit & 0x0F;

  PORTD = high;
  PORTC = low;
  
  outp = 1 << position;

  PORTB = outp;
  return;
}

inline void writeInt(unsigned number) {
  if (number > 9999) {
    return; // Display only has 4 digits
  }


}
