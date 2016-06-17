/*

  Exercise 5-3:
    Write a pointer version of the function strcat that we showed in Chapter 2:
    strcat(s,t) copies the string t to the end of s.

*/

#include <stdio.h>

void mystrcat(char *s, char *t) {
  while (*(++s) != '\0');
  while ((*s++ = *t++));
}

int main() {
  char buffer[100];
  sprintf(buffer, "Hello, ");
  mystrcat(buffer, "world!");
  printf("%s\n", buffer);
  return 0;
}
