/*

  unix tail program rewrite by Matt Shaffer

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINES 10000
#define MAX_LINE_LENGTH 1000

int main() {
  char *lines[MAX_LINES];
  size_t buffer_size = MAX_LINE_LENGTH;
  char *line = malloc(sizeof(char) * buffer_size);

  int i;
  while (getline(&line, &buffer_size, stdin) > 0) {
    char *temp_buff = malloc(sizeof(char) * strlen(line));
    strcpy(temp_buff, line);
    lines[i++] = temp_buff;
  }

  int length = i;
  for (i = length - 10; i < length; i++) {
    printf("%s", lines[i]);
  }
}
