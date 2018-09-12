#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int is_valid_ip(const char * addr) {
  int i, rez = 0;
  char *c, *tmp = (char *)malloc(100);
  char first;

  strcpy(tmp, addr);
  printf("%s\n", tmp);

  c = strtok(tmp, ".");
  while(c != NULL) {
    printf("%s\n", c);
    i = (int)*c;
    strcpy(first,c[0]);
    printf("first: %c\n", first);
    if (i > 0 && i < 256 && strcmp(first,"0") == 0) rez++;
    c = strtok(NULL, ".");
  }

  if (rez == 4) return 1;

  return 0;
}

int main() {
  char *addr = "192.168.1.1";
  printf("IP result: %d\n", is_valid_ip(addr));
  return 0;
}
