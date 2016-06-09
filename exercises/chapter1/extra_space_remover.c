/*

  Exercise 1-9:
    This program takes it's input and replaces all strings
    of one or more blanks with a single blank.

*/
#include <stdio.h>
#define TRUE 1
#define FALSE 0

int main() {

  int c, prev_char_was_blank = FALSE;
  while((c = getchar()) != EOF) {

    if (prev_char_was_blank) {
      if (c != ' ') {
        prev_char_was_blank = FALSE;
        putchar(c);
      }
    }
    else {
      if (c == ' ') {
        prev_char_was_blank = TRUE;
      }

      putchar(c);
    }

  }

  return 0;
}
