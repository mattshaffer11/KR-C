#include <stdio.h>
#include <ctype.h>

int lower(int c) {
  return !isdigit(c) ? tolower(c) : c;
}

int main() {
  printf("lower('A') = %c\n", lower('A'));
}
