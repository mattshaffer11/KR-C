#include <stdio.h>

#define TAB_SIZE 2

void puttab();

int main() {
  int character;

  while((character = getchar()) != EOF) {
    if (character == '\t') {
      puttab();
    }
    else {
      putchar(character);
    }
  }

  return 0;
}

void puttab() {
  int i;
  for (i = 0; i < TAB_SIZE; i++) {
    putchar(' ');
  }
}
