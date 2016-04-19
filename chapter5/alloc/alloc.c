#include <stdio.h>
#include "store.h"

int main() {
  char * s = alloc(1000);
  s = "Matt";
  printf("%s\n", s);
}
