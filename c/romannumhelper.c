#include <stdio.h>
#include <string.h>

int from_roman(char* roman) {
  return 0;
}

void to_roman(int number, char* destination) {
  char *result = "MCXI";
  strcpy(destination, result);
}

int main() {
  char roman[100];
  to_roman(1111, roman);
  printf("Result: %d %s \n", from_roman("MCXI"), roman );
  return 0;
}
