/*

  Exercise 1-8:
    This program takes it's input and counts and prints a count
    of all the white space chars.

*/
#include <stdio.h>

int main() {

  int c, count = 0;
  while((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      count++;
    }
  }

  printf("There were %d occurences of white space characters.\n", count);

  return 0;
}
