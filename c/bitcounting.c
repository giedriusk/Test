#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

size_t countBits(unsigned value) {

  char buffer[20];
  printf("Binary: %s\n", itoa(value, buffer, 2));

  return 0;
}

int main() {
  int result = countBits(5);
  printf("Result: %s \n", result);
  return 0;
}
