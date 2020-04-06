#include <sys/types.h>
#include <string.h>
#include <stdio.h>

ssize_t find_short(const char *s)
{
    ssize_t result = 9999;
    int length = strlen(s);
    int i, p = 0;
    for (i = 0; i <= length; i++) {
      if (s[i] == ' ' || s[i] == '\0') {
        if (p < result)
          result = p;
        p = 0;
      } else {
        p++;
      }
    }
    
    return result;
}

int main() {
    printf("Result: %d\r\n", find_short("are you watching me"));
    printf("Result: %d\r\n", find_short("me"));
    return 0;
}