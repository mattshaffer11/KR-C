#include <stdio.h>

void strcopy(char *s, char *t) {
  int i = 0;

  while ((s[i] = t[i]) != '\0') {
    s++;
    t++;
  }
}

int main() {
  char *str1 = "Hello";
  char str2[100];
  strcopy(str2, str1);

  printf("%s\n", str2);

  return 0;
}
