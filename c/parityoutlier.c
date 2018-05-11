#include <stdio.h>

int find_outlier(const int *values, size_t count) {
  int i;

  if (count < 3) return 0; // check for the minimal size

  // calculate the sum of two consequent members and check if it is even
  // even + even = even    odd + odd = even
  // if both sums is not even, this means we found an outlier
  for (i = 0; i < count; i++) {
    if (i < count-2) { // all until the last two items
      if ( (values[i] + values[i+1]) % 2 != 0 && 
           (values[i] + values[i+2]) % 2 != 0 &&
           (values[i+1] + values[i+2]) % 2 == 0) {
          return values[i];
      }
    } else { // the last two
      if ( (values[i] + values[i-1]) % 2 != 0 && 
           (values[i] + values[i-2]) % 2 != 0 &&
           (values[i-1] + values[i-2]) % 2 == 0) {
          return values[i];
      }
    }
  }

  return 0;
}

int main() {
  int values[] = {4, 2, 6, 8, 10, 5};
  //int values[] = {1, 3, 5, 7, 8};
  size_t count = sizeof(values)/sizeof(values[0]);
  printf("Result: %d\n", find_outlier(values, count));
  return 0;
}
