#include <stdio.h>
#include <stdlib.h>
#include "mylib.h"

#define MAX_LINES 50000
#define DEFAULT_NUMBER_OF_LINES 10

int get_number(char *p) {
  int i, c, max = 10;
  char str[max];

  for (i = 0; i < max && (c = p[i]) != ' '; i++) {
    str[i] = c;
  }
  str[i] = '\0';

  return atoi(str);
}

void print_last_n_lines(char *buffer[], int line_count, int lines_to_print) {
  if (lines_to_print > line_count) {
    lines_to_print = line_count;
  }

  int i;
  for (i = (line_count - lines_to_print); i < line_count; i++) {
    printf("%s\n", buffer[i]);
  }
}

int main(int argc, char *argv[]) {
  int lines_to_print = DEFAULT_NUMBER_OF_LINES;

  int i;
  for (i = 1; i < argc; i++) {
    if (argv[i][0] == '-') {
      lines_to_print = get_number(argv[i] + 1);
    }
    else {
      printf("usage: tail or tail -x (x = positive integer)\n");
      exit(1);
    }
  }

  char *buffer[MAX_LINES];
  int line_count = readlines(buffer, MAX_LINES);

  print_last_n_lines(buffer, line_count, lines_to_print);
}
