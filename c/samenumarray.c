#include <stdio.h>
#include <stdbool.h>

bool comp(int* a, int* b, size_t sizeArray) {
  int i, suma, sumb;

  suma = 0; sumb = 0;
  for (i = 0; i < sizeArray; i++) {
    suma += a[i] * a[i];
    sumb += b[i];
  }

  printf("Found: %d %d\n", suma, sumb);
  return (suma == sumb);
}

int main() {
  int a[] = {121, 144, 19, 161, 19, 144, 19, 11};
  int b[] = {121, 14641, 20736, 361, 25921, 361, 20736, 361};

  if (comp(a, b, 8)) printf("Arrays are the same.\n");
  else printf("Arrays are different.\n");

  return 0;
}
