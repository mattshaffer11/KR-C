#include <stdio.h>
#include <string.h>
#include "lib.h"

#define MAX_LINES 1000
#define MAX_LENGTH 1000

int getlines(char *lines[], char line_buffer[], int max_line_count) {
  char line[MAX_LENGTH];
  char *p = line_buffer;
  int len;
  int line_count;

  printf("%d\n", p - 10 + MAX_LENGTH);

  while ((len = mygetline(line, MAX_LENGTH)) > 0) {
    if (line_count > max_line_count || ((p - len + MAX_LENGTH)) > 0) {
      return -1;
    }
    else {
      line_buffer[len - 1] = '\0';
      strcpy(p, line);
      lines[line_count++] = p++;
    }
  }

  return line_count;
}

int main() {
  char *lines[MAX_LINES];
  char buffer[MAX_LENGTH];


  int line_count = getlines(lines, buffer, MAX_LINES);
  printf("%d\n", line_count);

  return 0;
}
