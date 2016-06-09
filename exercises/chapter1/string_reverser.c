/*

    Exercise 1-19:
      Write a function reverse(s) that reverses the character string s. Use it to
      write a program that reverses its input a line at a time.

*/

#include <stdio.h>
#include <string.h>
#include "shared.h"
#define TRUE 1
#define FALSE 0
#define MAX_LINE 1000

void strrev(char buffer[], int length) {
  int start_index = 0;
  int end_index = length - 2;

  char temp;
  while (start_index < end_index) {
    temp = buffer[end_index];
    buffer[end_index] = buffer[start_index];
    buffer[start_index] = temp;

    start_index++;
    end_index--;
  }
}

int main() {

  char buffer[MAX_LINE];

  int length;
  while ((length = get_line(buffer, MAX_LINE)) > 0) {
    if (length > 1) {
      strrev(buffer, length);
      printf("%s\n", buffer);
    }
  }

  return 0;
}
