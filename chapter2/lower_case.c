#include <stdio.h>

int lower(int c) {
  int result;
  if (c >= 'A' || c <= 'Z') {
    result = c + 'a' - 'A';
  }
  else {
    result = c;
  }

  return result;
}

int main() {
  printf("lower('A') = %c\n", lower('A'));
}
