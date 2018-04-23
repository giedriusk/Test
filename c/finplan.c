#include <stdio.h>

unsigned long long calc_week(unsigned long long n, unsigned long long rez) {

  int i;
  for (i = 0; i <= n; i++) rez += i;
  printf("N: %llu Rez: %llu\n", n, rez);

  if (n > 0) rez += calc_week(n-1, rez);
  else rez += 0;

  return rez;
}

unsigned long long finance(unsigned long long n) {
  unsigned long long rez = 0;

  // only positive numbers
  if (n < 0) return 0;

  // calculate weeks recursively
  rez = calc_week(n, rez);

  return rez;
}

int main() {
  printf("Result: %llu\n", finance(6));
  return 0;
}
