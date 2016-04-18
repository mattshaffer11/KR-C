#include <stdio.h>
#include <string.h>
#include <math.h>

void reverse(char str[], char newstr[]) {
  int i;
  int j = 0;

  for (i = strlen(str) - 1; i >= 0; i--) {
    newstr[j++] = str[i];
  }

  newstr[j] = '\0';
}

char itoc(int n) {
  return n + '0';
}

void itoa(int num, char str[]) {
  char tempstr[100];
  int result, modulo;
  int digit = 0;

  do {
    modulo = pow(10, digit + 1);
    result = num % modulo;
    num -= result;

    tempstr[digit] = itoc(result / (modulo / 10));
    digit++;
  } while (num >= modulo);

  str[digit] = '\0';

  reverse(tempstr, str);
}

int main() {
  char buffer[100];
  itoa(148, buffer);

  printf("itoa(148, s) = %s\n", buffer);

  return 0;
}
