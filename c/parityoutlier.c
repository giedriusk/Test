#include <stdio.h>

int find_outlier(const int *values, size_t count) {
  int result = 0;
  int i;

  if (count < 3) return result; // check for the minimal size

  // calculate the sum
  for (i = 0; i < count; i++) result += values[i];
  
  return result;
}

int main() {
  //int values[] = {2, 6, 8, 10, 3};
  int values[] = {1, 3, 5, 7, 8};
  size_t count = sizeof(values)/sizeof(values[0]);
  printf("Result: %d\n", find_outlier(values, count));
  return 0;
}
