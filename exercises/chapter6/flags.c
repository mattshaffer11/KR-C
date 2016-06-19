#include <stdio.h>
#include <stdlib.h>

struct {
  unsigned int is_debug: 1;
} flags;

int main() {
  flags.is_debug = 1;

  if (flags.is_debug == 1) {
    printf("%s\n", "DEBUG MODE");
  }
  else {
    printf("%s\n", "PRODUCTION MODE");
  }

  return 0;
}
