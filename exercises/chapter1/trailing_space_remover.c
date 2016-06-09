/*

  Exercise 1-18:
      Write a program to remove trailing blanks and tabs from each line of input,
      and to delete entirely blank lines.

*/

#include <stdio.h>
#include "shared.h"
#define TRUE 1
#define FALSE 0
#define MAX_LINE 1000

void trim_line(char buffer[], int length) {
  int i, c;
   for (i = length - 2; ((c = buffer[i]) == ' ' || c == '\t') && i > 0; i--)
      ;
    buffer[++i] = '\0';
}

int main() {

  char buffer[MAX_LINE];

  int length;
  while ((length = get_line(buffer, MAX_LINE)) > 0) {
    if (length > 1) {
      trim_line(buffer, length);
      printf("%s\n", buffer);
    }
  }

  return 0;
}
