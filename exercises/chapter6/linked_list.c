#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
  struct node *next;
  int data;
};

struct linked_list {
  struct node *head;
  int length;
};

struct linked_list *create_linked_list() {
  struct linked_list *ll = malloc(sizeof(struct linked_list));
  ll->head = NULL;
  ll->length = 0;
  return ll;
}

struct node *create_node(int data) {
  struct node *n = malloc(sizeof(struct node));
  n->data = data,
  n->next = NULL;

  return n;
}

void add_node(struct linked_list *ll, int data) {
  struct node *np = ll->head;

  if (ll->length == 0) {
    ll->head = create_node(data);
  }
  else {
    while (np->next != NULL) {
      np = np->next;
    }

    np->next = create_node(data);
  }

  ll->length++;
}

void print_list(struct linked_list *ll) {
  struct node *np = ll->head;

  while (np != NULL) {
    printf("%d\n", np->data);
    np = np->next;
  }
}

int main() {
  struct linked_list *ll = create_linked_list();

  add_node(ll, 5);
  add_node(ll, 8);

  print_list(ll);
}
