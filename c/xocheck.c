#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool xo(const char* str) {

  char* t;
  strcpy(t, str);
  int rez = 0;
  for (int i = 0; t[i] != '\0'; i++) {
    if (t[i] == 'o' || t[i] == 'O') rez++;
    if (t[i] == 'x' || t[i] == 'X') rez--;
  }

  if (rez == 0) return true;
  else return false;
}

int main() {
  printf("Starting check for x`es and o`s...\n");
  if (true == xo("Xo")) printf("TRUE\n");
  else printf("FALSE\n");
  return 0;
}
