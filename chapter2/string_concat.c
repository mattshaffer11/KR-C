#include <stdio.h>

int findEndPosition(char s[]) {
  int position = 0;

  while(s[position] != '\0') {
    position++;
  }

  return position;
}

void strcat(char s1[], char s2[]) {
  int endPosition = findEndPosition(s1);

  int i = 0;
  char c;
  while ((c = s2[i]) != '\0') {
    s1[endPosition + i] = c;
    i++;
  }

  i++;
  s1[endPosition + i] = '\0';
}

int main() {
  char string1[100] = "cat";
  strcat(string1, "dog");

  printf("\"cat\" + \"dog\" = %s\n", string1);
}
