#include <stdio.h>

int strindex(char s[], char t) {
  int index;
  int position = -1;
  char c;

  for (index = 0; (c = s[index]) != '\0'; index++) {
    if (c == t) {
      position = index;
    }
  }

  return position;
}

int main() {
  printf("strindex(\"Hello\", 'l') = %d\n", strindex("Hello", 'l'));

  return 0;
}
