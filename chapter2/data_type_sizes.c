#include <stdio.h>

int main() {
  int intSize = sizeof(int);
  int shortSize = sizeof(short);
  int longSize = sizeof(long);
  int floatSize = sizeof(float);
  int doubleSize = sizeof(double);
  int ldoubleSize = sizeof(long double);

  printf("Size of a short: %d bytes\n", shortSize);
  printf("Size of an int: %d bytes\n", intSize);
  printf("Size of a long: %d bytes\n", longSize);
  printf("Size of a float: %d bytes\n", floatSize);
  printf("Size of a double: %d bytes\n", doubleSize);
  printf("Size of a long double: %d bytes\n", ldoubleSize);

  return 0;
}
