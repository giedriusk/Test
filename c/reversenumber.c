#include <stdio.h>

long long reverse_num(long long n)
{
    long long r = (n < 0)?(n * -1):n;
    long long result = 0;
    while (r > 0) {
      result += r % 10;
      r = r / 10;
      if (r > 0) result *= 10;
    }
    return ((n < 0)?result*-1:result);
}

int main() {
  printf("Result: %lld\n", reverse_num(123));
  return 0;
}
