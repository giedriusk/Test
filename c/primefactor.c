#include <stdio.h>
#include <stdlib.h>

char* factors(int lst) {
  char* rez = malloc(100 * sizeof(char));
  int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
  rez = "1234";
  return rez;
}

int main() {
  printf("Result: %s\n", factors(36));
  return 0;
}
