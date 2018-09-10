#include <stdio.h>

char findMissingLetter(char array[], int arrayLength) {
  int i = 0, charVal, expectedVal = (int)array[0];
  for(i = 0; i < arrayLength; i++) {
    charVal = (int)array[i];
    printf("%d == %d\n", charVal, expectedVal);
    if (charVal != expectedVal) break;
    expectedVal++;
  }
  return (char)expectedVal;
}

int main() {

  char a[] = {'O', 'Q', 'R', 'S'};

  printf("Missing letter kata started...\n");
  printf("Result: %c\n", findMissingLetter(a, 4));
  return 0;
}
