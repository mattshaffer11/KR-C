#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORDS 100000

struct key_entry {
  char *word;
  int count;
};

struct keys {
  int count;
  struct key_entry *entries[MAX_WORDS];
};

struct keys *build_keys_dict() {
  struct keys *kd = malloc(sizeof(struct keys));
  kd->count = 0;
  return kd;
}

int find_word_index(struct keys *kd, char *word) {
  int i, index = -1;
  for (i = 0; i < kd->count; i++) {
    struct key_entry *k = kd->entries[i];
    if (strcmp(k->word, word) == 0) {
      index = i;
      break;
    }
  }

  return index;
}

struct key_entry *create_entry(char *s, int count) {
  struct key_entry *ke = malloc(sizeof(struct key_entry));
  ke->word = s;
  ke->count = count;

  return ke;
}

int add_entry(struct keys *kd, char *word) {
  int index = kd->count++;
  kd->entries[index] = create_entry(word, 1);
  return 0;
}

int increment_word(struct keys *kd, char *word, int index) {
  (kd->entries[index])->count++;
  return 0;
}

void add_word(struct keys *kd, char *word) {
  int index = find_word_index(kd, word);

  if (index > -1) {
    increment_word(kd, word, index);
  }
  else {
    add_entry(kd, word);
  }
}

void print_dict(struct keys *kd) {
  int i;
  for (i = 0; i < kd->count; i++) {
    struct key_entry *ke = kd->entries[i];
    printf("%s - %d\n", ke->word, ke->count);
  }
}

int main() {
  struct keys *dict = build_keys_dict();
  add_word(dict, "Hello");
  add_word(dict, "World!");
  add_word(dict, "World!");
  add_word(dict, "World!");
  print_dict(dict);
}
