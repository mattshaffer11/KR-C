#include <stdio.h>

int compare(int i, int j, int (*comp)(int, int)) {
  return (*comp)(i, j);
}

int asc(int i, int j) {
  int result;

  if (i < j) {
    result = -1;
  }
  else if (i == j) {
    result = 0;
  }
  else {
    result = 1;
  }

  return result;
}

int desc(int i, int j) {
  int result;

  if (i < j) {
    result = 1;
  }
  else if (i == j) {
    result = 0;
  }
  else {
    result = -1;
  }

  return result;
}

int main() {
  printf("desc = %d\n", compare(1, 2, (*desc)));
  printf("asc = %d\n", compare(1, 2, (*asc)));
}
