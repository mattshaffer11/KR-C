#include <stdio.h>

#define ASCII_SIZE 127

void initAsciiArray(char s[]) {
  int i;
  for (i = 0; i <= ASCII_SIZE; i++) {
    s[i] = '\0';
  }
}

void createCharDict(char s[], char buffer[]) {
  int i = 0;
  char c;
  while ((c = s[i]) != '\0') {
    buffer[c] = c;
    i++;
  }
}

void squeeze(char s1[], char s2[]) {
  char CHARS_DICT[ASCII_SIZE];
  initAsciiArray(CHARS_DICT);
  createCharDict(s2, CHARS_DICT);

  char c;
  int i = 0;
  int position = 0;
  while ((c = s1[i]) != '\0') {
    if (CHARS_DICT[c] != c) {
      s1[position] = c;
      position++;
    }
    i++;
  }

  s1[position] = '\0';
}

int main() {
  char s1[] = "abcdefg";
  char s2[] = "acg";
  squeeze(s1, s2);

  printf("%s\n", s1);
}
