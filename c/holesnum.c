#include <stdio.h>

int get_num(long a) {
  int holescnt, digit;

  // check every digit and determine if it has a "HOLE"
  holescnt = 0;
  while (a != 0) {
    digit = a % 10;
    switch(digit) {
      case 0:
      case 6:
      case 9:
               holescnt += 1; break;
      case 8:  holescnt += 2; break;
      default: holescnt += 0;
    }
    printf("Digit: %d\n", digit);
    a /= 10;
  }

  return holescnt;
}

int main() {
  printf("Holes: %d\n", get_num(36801));
  return 0;
}
