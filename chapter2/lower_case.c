#include <stdio.h>
#include <ctype.h>

int lower(int c) {
  int result;
  if (!isdigit(c)) {
    result = tolower(c);
  }
  else {
    result = c;
  }

  return result;
}

int main() {
  printf("lower('A') = %c\n", lower('A'));
}
