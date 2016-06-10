/*

  Exercise 2-10:
  Rewrite the function lower, which converts upper case letters to lower case,
  with a conditional expression instead of if-else.

*/

#include <stdio.h>
#define UPPER_TO_LOWER_DISTANCE 32

void lowercase(char *s) {
  int i;
  char c;
  for (i = 0; (c = s[i]) != '\0'; i++) {
    if (c >= 65 && c <= 90) {
      s[i] = c + UPPER_TO_LOWER_DISTANCE;
    }
  }
}

int main() {
  char s[] = { 'H', 'e', 'y', '\0' };
  lowercase(s);
  printf("%s\n", s);

  return 0;
}
