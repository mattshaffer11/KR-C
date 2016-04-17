#include <stdio.h>
#include <math.h>

void itoa(int num, char str[]) {
  int result, modulo;
  int digit = 1;

  do {
    modulo = pow(10, digit);
    result = num % modulo;
    num -= result;

    str[digit - 1] = (result / (modulo / 10)) + '0';
    digit++;
  } while (num >= modulo);

  str[++digit] = '\0';
}

int main() {
  char buffer[100];
  itoa(148, buffer);

  printf("itoa(148, s) = %s\n", buffer);

  return 0;
}
