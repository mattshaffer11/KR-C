#include <stdio.h>
#include <string.h>

void mystrcat(char *s, char *t) {
  char *sp = s + strlen(s);
  char *tp = t;

  for (; (*sp = *tp) != '\0'; sp++, tp++);
}

int main() {
  char str1[100] = "Matt";
  char *str2 = "Shaffer";

  mystrcat(str1, " ");
  mystrcat(str1, str2);

  printf("%s\n", str1);
  return 0;
}
