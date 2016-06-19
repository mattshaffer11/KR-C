#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
  struct node *next;
  int data;
} Node;

typedef struct linked_list {
  struct node *head;
  int length;
} LinkedList;

LinkedList *create_linked_list() {
  LinkedList *ll = malloc(sizeof(LinkedList));
  ll->head = NULL;
  ll->length = 0;
  return ll;
}

Node *create_node(int data) {
  Node *n = malloc(sizeof(Node));
  n->data = data,
  n->next = NULL;

  return n;
}

void add_node(LinkedList *ll, int data) {
  Node *np = ll->head;

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

void print_list(LinkedList *ll) {
  Node *np = ll->head;

  while (np != NULL) {
    printf("%d\n", np->data);
    np = np->next;
  }
}

int main() {
  LinkedList *ll = create_linked_list();

  add_node(ll, 5);
  add_node(ll, 8);

  print_list(ll);
}
