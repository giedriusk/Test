#include <stdio.h>
#include <string.h>

int rgb(int r, int g, int b, char *output) {

  char c[7] = "";
  if (r < 0) r = 0; if (r > 255) r = 255;
  if (g < 0) g = 0; if (g > 255) g = 255;
  if (b < 0) b = 0; if (b > 255) b = 255;
  sprintf(c, "%02X%02X%02X", r, g, b);
  strcpy(output, c);

  return 0;
}

int main() {
  printf("Started...\n");
  char output[7] = {0};
  rgb(355, 125, 10, output);
  printf("Result %s\n", output);
  return 0;
}
