#include <stdio.h>
#include <string.h>

#define ALLOC_SIZE 50000

static char ALLOC_BUFFER[ALLOC_SIZE];
static char *ALLOCP = ALLOC_BUFFER;

char *alloc(int length) {
  ALLOCP += length;
  return ALLOCP - length;
}

void remove_new_line(char *s, int length) {
  s[length - 1] = '\0';
}

int readline(char *buffer, int max_length) {
  int c, len;
  for (len = 0; len < max_length && (c = getchar()) != EOF && c != '\n'; len++) {
    buffer[len] = c;
  }

  if (c == '\n') {
    buffer[len] = c;
    len++;
  }

  buffer[len] = '\0';

  return len;
}

int readlines(char *buffer[], int max_lines) {
  int line_count = 0;

  int max_line_length = 1000;
  char line[max_line_length];

  int line_length;
  char *p;

  while (line_count < max_lines && (line_length = readline(line, max_line_length)) > 0) {
    p = alloc(line_length);
    remove_new_line(line, line_length);
    strcpy(p, line);

    *buffer++ = p;
    line_count++;
  }


  return line_count;
}
