/*

  Exercise 3-1:
    Our binary search makes two tests inside the loop, when one would suffice (at
    the price of more tests outside.) Write a version with only one test inside the loop and
    measure the difference in run-time.

*/

#include <stdio.h>

int binary_search(int target, int data[], int low, int length) {
  int result = -1, high = length - 1;

  if (high >= low) {
    int index = (high + low) / 2;
    int middle_item = data[index];

    if (middle_item == target) {
      result = index;
    }
    else if (middle_item > target) {
      return binary_search(target, data, 0, index + 1);
    }
    else {
      return binary_search(target, data, index + 1, length);
    }
  }

  return result;
}

int main() {
  int data[] = { 1, 2, 3, 6, 8, 10, 15, 20, 45};
  printf("%d\n", binary_search(45, data, 0, 9));
}
