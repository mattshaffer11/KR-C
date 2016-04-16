#include <stdio.h>

void escape(char s[], char t[]) {
  char c;
  int tposition;
  int sposition = 0;

  for (tposition = 0; (c = t[tposition]) != '\0'; tposition++) {
    switch(c) {
      case '\n':
        s[sposition] = '\\';
        s[++sposition] = 'n';
        break;
      case '\t':
        s[sposition] = '\\';
        s[++sposition] = 't';
        break;
      default:
        s[sposition] = c;
    }

    sposition++;
  }
  s[++sposition] = '\0';
}

int main() {
  char a[100];
  char b[] = "Hello my name is: \n \t Matt Shaffer";
  escape(a, b);

  printf("escape(a, b) = %s\n", a);
  return 0;
}
