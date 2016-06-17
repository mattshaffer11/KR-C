/*
  Exercise 4-14:
    Define a macro swap(t,x,y) that interchanges two arguments of type t.
    (Block structure will help.)
*/

#include <stdio.h>

#define swap(T, X, Y) { T temp = X; X = Y; Y = temp; }

int main() {
  int x = 10, y = 2;
  swap(int, x, y);
  printf("%d\n", x);
}
