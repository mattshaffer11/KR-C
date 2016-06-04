#include <stdio.h>

union o {
  int ival;
  char *sval;
} objects;

int main() {
  union o item;
  item.ival = 2;
  printf("%d\n", item.ival);
  item.sval = "Matt";
  // ival should be different
  printf("%d\n", item.ival);
}
