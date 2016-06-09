/*

  Exercise 1-17:
    This program prints all input lines that are longer than a given amount of chars

*/
#include <stdio.h>
#include <ctype.h>

#define TRUE 1
#define FALSE 0
#define MINIMUM_LINE_LENGTH 20
#define MAX_LINE 300

int is_whitespace(char c) {
  return c == ' ' || c == '\t' || c == '\n';
}

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

int main() {

  char buffer[MAX_LINE];

  int length;
  while ((length = get_line(buffer, MAX_LINE)) > 0) {
    if (length >= MINIMUM_LINE_LENGTH) {
      printf("%s\n", buffer);
    }
  }

  return 0;
}
