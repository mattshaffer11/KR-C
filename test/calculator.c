#include <stdio.h>

int mylen(char *s) {
  int count = 0;
  for (; *s != '\0'; s++) {
    count++;
  }

  return ++count;
}

int main() {
  char *str = "Hello";
  printf("%d\n", mylen(str));
}
