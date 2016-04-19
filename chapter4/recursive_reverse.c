#include <stdio.h>
#include <string.h>

void swap(char str[], int i, int j) {
  int temp = str[i];
  str[i] = str[j];
  str[j] = temp;
}

void recursive_reverse(char str[], int begin, int end) {
  if (begin < end) {
    swap(str, begin, end);
    recursive_reverse(str, ++begin, --end);
  }
}

void reverse(char str[]) {
  recursive_reverse(str, 0, strlen(str) - 1);
}

int main() {
  char s[] = "hello";
  reverse(s);
  printf("%s\n", s);

  return 0;
}
