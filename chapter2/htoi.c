#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int lookupHex(int n) {
  int result;

  switch (tolower(n)) {
    case 'a':
      result = 10;
      break;
    case 'b':
      result = 11;
      break;
    case 'c':
      result = 12;
      break;
    case 'd':
      result = 13;
      break;
    case 'e':
      result = 14;
      break;
    case 'f':
      result = 15;
      break;
  }

  return result;
}

int convertHex(char c, int position) {
  int value;

  if (!isdigit(c)) {
    value = lookupHex(c);
  }
  else {
    value = c - '0';
  }

  return (int) (value * (pow(16, position)));
}

int htoi(char input[]) {
  char digit;
  int count = 0;
  int sum = 0;

  int i;
  int stringLength = strlen(input);
  for (i = stringLength - 1; i >= 0; i--) {
    digit = input[i];

    if (digit == 'x') {
      break;
    }
    else if (isdigit(digit) || (digit >= 'A' && digit <= 'F') || (digit >= 'a' && digit <= 'f')) {
      sum += convertHex(digit, count);
    }
    else {
      sum = 0;
      break;
    }

    count++;
  }

  return sum;
}

int main() {
  printf("htoi(\"0xA199F\") = %d\n", htoi("0xA199F"));

  return 0;
}
