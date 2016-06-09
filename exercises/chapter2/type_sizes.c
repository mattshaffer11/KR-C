/*

  Exercise 2-1:
    Write a program to determine the ranges of char, short, int, and long
    variables, both signed and unsigned, by printing appropriate values from standard headers
    and by direct computation. Harder if you compute them: determine the ranges of the various
    floating-point types.

*/

#include <stdio.h>
#include <limits.h>

int main() {
  printf("CHAR's have %d bits and a range of: %d - %d\n", CHAR_BIT, CHAR_MIN, CHAR_MAX);
  printf("SHORTS's have a range of: %d - %d\n", SHRT_MIN, SHRT_MAX);
  printf("INTS's have a range of: %d - %d\n", INT_MIN, INT_MAX);
  printf("LONGS's have a range of: %d - %d\n", LONG_MIN, LONG_MAX);

  return 0;
}
