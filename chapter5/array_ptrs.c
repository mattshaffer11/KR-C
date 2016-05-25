#include <stdio.h>

void doubleArr(int *pa, int len) {
  int i;
  for (i = 0; i < len; i++) {
    *(pa + i) = *(pa + i) * 2;
  }
}

int main() {
  int nums[] = { 1, 2, 3 };

  doubleArr(&nums[0], 3);

  int i;
  for (i = 0; i < 3; i++) {
    printf("%d\n", nums[i]);
  }

  return 0;
}
