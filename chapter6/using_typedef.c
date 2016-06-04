#include <stdio.h>

typedef struct person {
  int age;
} Person;

int main() {
  Person p = { 1 };
  printf("%d\n", p.age);
}
