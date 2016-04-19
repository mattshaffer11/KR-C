#include <stdio.h>

int strlen(char *str) {
  char *p = str;

  while (*p != '\0') p++;

  return p - str;
}

int main() {
  printf("strlen(\"cat\") = %d\n", strlen("cat"));

  return 0;
}
