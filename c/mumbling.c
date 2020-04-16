#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

char *accum(const char *source) {
  int l = strlen(source);
  int i = 0;
  char *result;
  char *tmp = (char *)malloc(l * sizeof(char));
//  char *prev = "";
  strcpy(tmp, source);


  return result;
}

int main() {
  char *source = "TesT";
  printf("Result: %s\r\n", accum(source));
  return 0;
}
