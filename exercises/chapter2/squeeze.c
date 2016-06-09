/*

  Exercise 2-4:
    Write an alternative version of squeeze(s1, s2) that deletes each character in
    s1 that matches any character in the string s2.

*/

#include <stdio.h>
#include <string.h>

#define MAX_STRING 200

void squeeze(char s1[], char s2[]) {

  int indexes_to_remove[MAX_STRING] = { 0 };

  char c1, c2;
  int i, j;
  for (i = 0; (c1 = s2[i]) != '\0'; i++) {
    for (j = 0; (c2 = s1[j]) != '\0'; j++) {
      if (c1 == c2) {
        indexes_to_remove[j] = 1;
      }
    }
  }

  int s1_length = strlen(s1);
  int k;

  int amount_to_shift = 0;
  for (k = 0; k < s1_length; k++) {
    int should_remove = indexes_to_remove[k];
    if (should_remove) {
      amount_to_shift++;
      s1[k] = s1[k + amount_to_shift];
    }
    else {
      s1[k] = s1[k + amount_to_shift];
    }
  }
}

int main() {
  char s[] = "Hallo";
  char t[] = "Hello!";

  squeeze(s, t);
  printf("%s\n", s);

  return 0;
}
