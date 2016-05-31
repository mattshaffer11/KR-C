#include <stdio.h>
#include "mylib.h"

#define MAX_LINES 50000

int main() {
  char *buffer[50000];
  int lines = readlines(buffer, MAX_LINES);

  int i;
  for (i = 0; i < lines; i++) {
    printf("%s\n", buffer[i]);
  }

}
