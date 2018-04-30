#include <stdio.h>

int solution(int number) {
  int i, rez = 0;

  for(i = 0; i < number; i++) {
    if (i % 3 == 0) { rez += i; continue; } // consider once
    if (i % 5 == 0) { rez += i; }
    printf("i: %d, Result: %d\n", i, rez);
  }

  return rez;
}

int main() {
  printf("Result: %d\n", solution(20));
  return 0;
}
