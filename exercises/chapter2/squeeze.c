/*

  Exercise 2-4:
    Write an alternative version of squeeze(s1, s2) that deletes each character in
    s1 that matches any character in the string s2.

*/

#include <stdio.h>
#include <string.h>

#define MAX_STRING 200

int strcontains(char *s, char target) {
  char c;
  int i, found = 0;
  for (i = 0; (c = s[i]) != '\0'; i++) {
    if (c == target) {
      found = 1;
      break;
    }
  }

  return found;
}

void squeeze(char s1[], char s2[]) {
  char temp_buffer[MAX_STRING];

  char c;
  int i, buffer_position = 0;
  for (i = 0; (c = s1[i]) != '\0'; i++) {
    if (!strcontains(s2, c)) {
      temp_buffer[buffer_position++] = c;
    }
  }

  temp_buffer[buffer_position] = '\0';
  strcpy(s1, temp_buffer);
}

int main() {
  char s[] = "testingac";
  char t[] = "test!abc";

  squeeze(s, t);
  printf("%s\n", s);

  return 0;
}
