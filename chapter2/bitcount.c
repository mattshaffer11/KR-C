#include <stdio.h>

int bitcount(unsigned int x) {
  int b;

  for (b = 0; x != 0; x >>= 1) {
    if (x & 1) b++;
  }

  return b;
}

int main() {
  printf("%d\n", bitcount(2));

  return 0;
}
