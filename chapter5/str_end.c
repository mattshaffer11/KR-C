#include <stdio.h>
#include <string.h>

/* checks if substring t is at the end of string s */
int strend(char *s, char *t) {
  int found = 1;
  int s_index = strlen(s);
  int t_index = strlen(t);

  if (t_index <= s_index) {
    while (t_index >= 0) {
      if (*(s + s_index) != *(t + t_index)) {
        found = -1;
        break;
      }

      s_index--;
      t_index--;
    }
  }
  else {
    found = -1;
  }

  return found;
}

int main() {
  printf("%d\n", strend("Hello", "llo"));
  printf("%d\n", strend("Hello", "p"));
}
