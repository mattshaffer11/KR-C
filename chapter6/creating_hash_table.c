#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define HASH_SIZE 100

unsigned int hash(char *s) {
  unsigned hashval;

  for (hashval = 0; *s != '\0'; s++) {
    hashval = *s + 31 * hashval;
  }

  return hashval % HASH_SIZE;
}

struct hash_entry {
  struct hash_entry *next;
  char *key;
  char *value;
};

struct hash_entry *entry_alloc() {
  return (struct hash_entry *) malloc(sizeof(struct hash_entry));
}

struct hash_entry *create_entry(char *key, char *value) {
  struct hash_entry *he = entry_alloc();
  he->key = key;
  he->value = value;
  he->next = NULL;
  return he;
}

struct hash_entry *hash_table[HASH_SIZE];

struct hash_entry *get(char *key) {
  unsigned int hash_position = hash(key);

  struct hash_entry *he = NULL;
  for (he = hash_table[hash_position]; he != NULL; he = he->next) {
    if (strcmp(he->key, key) > -1) {
      break;
    }
  }

  return he;
}

void put(char *key, char *value) {

  struct hash_entry *he;
  unsigned int hash_position = hash(key);
  if ((he = get(key)) == NULL) {
    hash_table[hash_position] = create_entry(key, value);
  }
  else {
    if (strcmp(he->key, key) == 0) {
      he->value = value;
    }
    else {
      for (he = hash_table[hash_position]; he->next != NULL; he = he->next)
        ;
      he->next = create_entry(key, value);
    }
  }
}

int main() {
  put("Hello", "World");
  put("World", "Hello");
  put("World", "New Hello");

  struct hash_entry *he = get("World");
  if (he == NULL) {
    printf("Not found.\n");
  }
  else {
    printf("%s\n", he->value);
  }
}
