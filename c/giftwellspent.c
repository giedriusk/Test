#include <stdio.h>
#include <stdlib.h>

int *buy(int x, int *arr) {
  int i = 0;
  int j = 0;
  int *r = malloc(2 * sizeof(int));
  int s = sizeof(arr);
  if (s > 1) {
    for(i = 0; i < s; i++) {
      for(j = 0; j < s; j++) {
        if (j != i) {
          if ((arr[i] + arr[j]) == x) {
            r[0] = i;
            r[1] = j;
            return r;
          }
        }
      }
    }
  }
  return NULL;
}

int main() {
    int arr[] = {5,2,3,4,5};
    int *result = malloc(2 * sizeof(int));
    result = buy(5, arr);
    if (NULL == result) printf("Result: NULL\r\n");
    else printf("Result: %d %d\r\n", result[0], result[1]);
    free(result);
    return 0;
}