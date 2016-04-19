#include <stdio.h>

int mult(x, y) {
  int result = 0;

  int i;
  for (i = 0; i < x; i++) {
    result += y;
  }

  return result;
}
