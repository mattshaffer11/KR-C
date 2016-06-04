#include <stdio.h>
#include <string.h>

struct employee {
  char *name;
  int age;
} employees[] = {
  { "Matt", 21 },
  { "Steve", 30 },
  { "Joel", 34 }
};

struct employee *find_employee(struct employee list[], size_t length, char *name) {
  struct employee *record = NULL;

  struct employee *p;
  int i;
  for (i = 0; i < length; i++) {
    p = &list[i];

    if (strcmp(p->name, name) == 0) {
      record = p;
      break;
    }
  }

  return record;
}

int main() {
  struct employee *matt = find_employee(employees, (sizeof(employees) / sizeof(struct employee)), "Matt");
  if (matt != NULL) {
    printf("Matt's age = %d\n", matt->age);
  }
  else {
    printf("Employee not found\n");
  }
}
