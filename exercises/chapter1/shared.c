#include <stdio.h>

int get_line(char buffer[], int max_line) {
  int count = 0;

  int i, c;
  for (i = 0; (c = getchar()) != EOF && c != '\n' && i < max_line; i++) {
    buffer[i] = c;
    count++;
  }

  if (c == '\n') {
    buffer[i] = '\n';
    count++;
  }

  buffer[i] = '\0';

  return count;
}
