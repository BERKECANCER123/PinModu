/*
Ahmet Burçoğlu,14.12.2017,Gece
ATMEGA328 İÇİN PİNMODU FONKSİYONU 
*/
void PinModu(int pin, boolean mod) {
  byte bitcik;
  int b[8] = { -1, -1, 13, 12, 11, 10, 9, 8};
  int c[8] = { -1, -1, A5, A4, A3, A2, A1, A0};
  int d[8] =  {7, 6, 5, 4, 3, 2, 1, 0};
  for (int i = 0; i <= 7; i++) {
    if (b[i] == pin) {
      bitcik =  1 << 7 - i;
      if (mod == 1) {
        DDRB |= bitcik;
      }
      else
      {
        DDRB &= ~bitcik;
      }
    }
    else if (c[i] == pin) {
      bitcik =  1 << 7 - i;
      if (mod == 1) {
        DDRC |= bitcik;
      }
      else
      {
        DDRC &= ~bitcik;
      }
    }
    else if (d[i] == pin) {
      bitcik =  1 << 7 - i;
      if (mod == 1) {
        DDRD |= bitcik;
      }
      else
      {
        DDRD &= ~bitcik;
      }
    }
  }
}


