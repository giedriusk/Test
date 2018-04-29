#include <stdio.h>

unsigned long long calc_week(unsigned long long n, unsigned long long k, unsigned long long rez) {

  unsigned long long i = k;
  while( i <= n ) rez += (k * 2) + (i++ - k);

  if (k > 0) rez = calc_week(n, k-1, rez); // going deeper 1 level
  else rez += 0;

  return rez;
}

unsigned long long finance(unsigned long long n) {
  unsigned long long rez = 0;

  // only positive numbers
  if (n < 0) return 0;

  // calculate weeks recursively starting from the last
  rez = calc_week(n, n, rez);

  return rez;
}

int main() {
  printf("Result: %llu\n", finance(5000));
  return 0;
}
