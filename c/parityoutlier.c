#include <stdio.h>

int find_outlier(const int *values, size_t count) {
  int result = 0;
  int i;

  if (count < 3) return result; // check for the minimal size

  // calculate the sum of each neibourgh and check if it is even
  // even + even = even    odd + odd = even
  // if both sums is not even, this means we found an outlier
  for (i = 1; i < count-1; i++) {
    if ( (values[i] + values[i+1]) % 2 != 0 && 
         (values[i] + values[i-1]) % 2 != 0) {
        return values[i];
    }
  }

  return result;
}

int main() {
  int values[] = {3, 2, 6, 8, 10};
  //int values[] = {1, 3, 5, 7, 8};
  size_t count = sizeof(values)/sizeof(values[0]);
  printf("Result: %d\n", find_outlier(values, count));
  return 0;
}
