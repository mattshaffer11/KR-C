#include <stdio.h>

int main() {
  int ages[] = { 10, 14, 24 };

  size_t length = sizeof(ages) / sizeof(int);
  int i;

  for (i = 0; i < length; i++) {
    printf("%d\n", ages[i]);
  }

  return 0;
}
