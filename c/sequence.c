#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

char *series_sum(const size_t n) {
  char *rez;
  double r = 0;
  int i;

  rez = malloc(5 * sizeof(char));

  // only natural numbers
  if (n > 0) {
    for (i = 1; i <= n; i++) {
      if (i == 1) r = 1;
      else r += 1 / (((double)i * 3) - 2); // calculates the sequence
    }
  }
  sprintf(rez, "%.2f", r);
  return rez;
}

int main() {
  printf("Rez: %s\n", series_sum(77));
  return 0;
}
