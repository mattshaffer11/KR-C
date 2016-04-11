#include <stdio.h>

int myStrlen(char c[]) {
  int i = 0;

  while(c[i] != '\0') {
    i++;
  }

  return i;
}

int main() {
  printf("String length of pie = %d\n", myStrlen("pie"));

  return 0;
}
