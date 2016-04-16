#include <stdio.h>

int search(int target, int data[], int size) {
  int low = 0;
  int high = size;
  int previousMiddle = -1;

  int middle = (high + low) / 2;

  while (1) {
    if (data[middle] == target) {
      return middle;
    }
    else if (data[middle] > target) {
      high = middle;
      middle = (high + low) / 2;
    }
    else if (data[middle] < target){
      low = middle;
      middle = (high + low) / 2;
    }
    else {
      break;
    }

    previousMiddle = middle;
  }

  return -1;
}

int main() {
  int data[] = {2, 3, 3, 4, 4, 5, 8, 9};

  printf("search(5, data, 8) = %d\n", search(5, data, 8));
}
