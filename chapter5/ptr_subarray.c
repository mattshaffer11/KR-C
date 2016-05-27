#include <stdio.h>

int* subarray(int * arr, int position) {
  return arr + position;
}

int main() {
  int arr[] = { 1, 2, 3, 5 };

  int *parr = subarray(arr, 1);

  printf("arr[0] = %d\n", parr[0]);
}
