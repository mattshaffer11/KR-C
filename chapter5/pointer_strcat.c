#include <stdio.h>
#include <string.h>

void mystrcat(char *s, char *t) {
  int position = strlen(s);
  int count = 0;

  for (; (s[position] = t[count]) != '\0'; position++, count++);
}

int main() {
  char str1[100] = "Matt";
  char *str2 = "Shaffer";

  mystrcat(str1, " ");
  mystrcat(str1, str2);

  printf("%s\n", str1);
  return 0;
}
