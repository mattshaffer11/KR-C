#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main() {
  int inString = FALSE;
  int inMultline = FALSE;
  int inComment = FALSE;
  int skipPrint = FALSE;

  char c;
  char lastChar = ' ';

  int i;
  for (i = 0; (c = getchar()) != EOF; i++) {

    if (!inString && inComment) {
      if (inMultline && (lastChar == '*' && c == '/')) {
        inMultline = FALSE;
        inComment = FALSE;
      }
      else if (!inMultline && c == '\n') {
        inComment = FALSE;
        putchar(c);
      }
      skipPrint = TRUE;
    }
    else {
      if (!inString && lastChar == '/' && c == '*') {
        inComment = TRUE;
        inMultline = TRUE;
      }
      else if (!inString && lastChar == '/' && c == '/') {
        inComment = TRUE;
      }
      else {
        if (!inString && c == '\"') {
          inString = TRUE;
        }
        else if (inString && c == '\"') {
          inString = FALSE;
        }

        if (!skipPrint) {
          putchar(lastChar);
        }
        else {
          skipPrint = FALSE;
        }
      }
    }

    lastChar = c;
  }

  return 0;
}
