/*

  Exercise 1-13:
    This program prints a histogram of the word lengths in the input.

*/
#include <stdio.h>
#include <ctype.h>

#define TRUE 1
#define FALSE 0
#define LONGEST_ALLOWED_WORD 30

int is_whitespace(char c) {
  return c == ' ' || c == '\t' || c == '\n';
}

void display_histogram(int *counts) {
  printf("\n%s\n\n", "Word Counts:");

  int i;
  for (i = 1; i < LONGEST_ALLOWED_WORD; i++) {
    printf("%2d: %3d\n", i, *(++counts));
  }
}

int main() {

  int WORD_COUNTS[LONGEST_ALLOWED_WORD] = {0};
  int c, word_count = 0, in_word = FALSE;
  while((c = getchar()) != EOF) {
    if (in_word) {
      if (is_whitespace(c)) {
        in_word = FALSE;
        WORD_COUNTS[word_count]++;
        word_count = 0;
      }
      else if (isalpha(c)) {
        word_count++;
      }
    }
    else {
      if (!is_whitespace(c)) {
        in_word = TRUE;
        word_count++;
      }
    }
  }

  display_histogram(WORD_COUNTS);

  return 0;
}
