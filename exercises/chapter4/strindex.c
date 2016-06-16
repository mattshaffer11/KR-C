/*

Exercise 4-1:
  Write the function strindex(s,t) which returns the position of the rightmost
  occurrence of t in s, or -1 if there is none.

*/

#include <stdio.h>
#include <string.h>

int substrcmp(char *s, char *t, int length) {
  int i;
  char c1, c2;
  for (i = 0; i < length; i++) {
    if (s[i] != t[i]) {
      i = -1;
      break;
    }
  }

  return i;
}

int strindex(char *str, char *target) {
  int position = -1;
  int target_length = strlen(target);
  int str_length = strlen(str);

  int i;

  for (i = 0; (str_length - target_length >= i) && (position = substrcmp(str + i, target, target_length)); i++) {
    if (position != -1) {
      position = i;
      break;
    }
  }

  return position;
}

int main() {
  int result = strindex("ddadbcdabc", "abc");
  printf("%d\n", result);

  return 0;
}
