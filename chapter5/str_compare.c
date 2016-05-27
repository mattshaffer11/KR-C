#include <stdio.h>

int equal(char *s, char *p) {
  int equal = 1;

  while (*s++ != '\0' && *p++ != '\0') {
    if (*s != *p) {
      equal = 0;
      break;
    }
  }

  return equal;
}

int main() {
  printf("%d\n", equal("hellp", "helli"));

  return 0;
}
