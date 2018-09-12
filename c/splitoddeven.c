#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *split_odd_and_even(int value, size_t *pcount) {
  int digit = 0;
  int i;

  // get number of digits, create the tmp array for digits analysis
  int digitcnt = 0;  int tmp[100];
  while (value != 0) { tmp[digitcnt++] = value % 10; value /= 10; }
  printf("Count of digits: %d\n", digitcnt);

  // build groups
  int groups[digitcnt];
  int k = 0;
  int type, typebefore = 0; // stores the type: 1 = even, 0 = odd
  for (i = digitcnt-1; i >= 0; i--) {
    printf("%d\n", tmp[i]);

    // determines the type
    type = (tmp[i] % 2 == 0)?1:0;

    // first digit?
    if (i == digitcnt-1) groups[k] = tmp[i];
    else {
      // all other digits
      if (type == typebefore) {
        // add to the same group
        groups[k] = groups[k] * 10 + tmp[i];
      } else {
        // add to the next group
        k += 1;
        groups[k] = tmp[i];
      }
    }
    typebefore = type;
    printf("Group: %d, %d\n", k, groups[k]);
  }

  // removes unused memory
  int grfinal[k+1];
  for (i = 0; i <= k; i++) grfinal[i] = groups[i];

  printf("Sizes: %d k=%ld grfin=%ld groups=%ld %ld %ld\n", k, sizeof(k), sizeof(grfinal), sizeof(groups), sizeof(groups[0]), sizeof(groups)/sizeof(groups[0]));

  int *gr = grfinal;

  printf("sizing: k=%d gr=%ld grfinal=%ld\n", k, sizeof(gr), sizeof(grfinal));

  *pcount = sizeof(grfinal)/sizeof(grfinal[0]);
  return gr;
}

int main() {
  int value = 13579;
  printf("Value: %d\n", value);
  size_t count = 0;
  int *received = split_odd_and_even(value, &count);
  int expected[] = { 13579 };
  printf("Size compare: received=%ld expected=%ld\n", sizeof(received), sizeof(expected));
  printf("Count: %zu %zu\n", count, sizeof(expected)/sizeof(expected[0]));
  for (int i = 0; i < count; i++)
    printf("Num: %d\n", received[i]);

  return 0;
}
