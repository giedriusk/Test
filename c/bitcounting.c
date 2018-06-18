#include <stdio.h>
#include <stddef.h>

size_t countBits(unsigned value) {

  unsigned remaining = value;
  size_t sum = 0;

  // using division by 2 method
  while (remaining > 0) {
    if (remaining % 2 > 0) sum++;
    remaining = remaining / 2;
  }

  return sum;
}

int main() {
  int result = countBits(1234);
  printf("Result: %d \n", result);
  return 0;
}
