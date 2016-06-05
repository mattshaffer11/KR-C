#include <stdio.h>
#define MAXLINE 10000


int main() {
  char buffer[MAXLINE];
  printf("%s", "Please enter your name: ");
  fgets(buffer, MAXLINE, stdin);
  printf("Hello, %s", buffer);

  return 0;
}
