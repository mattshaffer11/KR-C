/*

  Exercise 1-12:
    This program takes it's input and print's each word on a seperate line.

*/
#include <stdio.h>
#include <ctype.h>

#define TRUE 1
#define FALSE 0

int is_whitespace(char c) {
  return c == ' ' || c == '\t' || c == '\n';
}

int main() {

  int c, in_word = FALSE;
  while((c = getchar()) != EOF) {
    if (in_word) {
      if (is_whitespace(c)) {
        in_word = FALSE;
        putchar('\n');
      }
      else if (isalpha(c)) putchar(c);
    }
    else {
      if (!is_whitespace(c)) {
        in_word = TRUE;
        if (isalpha(c)) putchar(c);
      }
    }
  }

  return 0;
}
