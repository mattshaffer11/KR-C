#include <stdio.h>
#include <stdlib.h>

struct node {
  int value;
  struct node *left_child;
  struct node *right_child;
};

struct node *nalloc() {
  return (struct node *) (malloc(sizeof(struct node)));
}

struct node *create_node(int val) {
  struct node *n = nalloc();
  n->value = val;
  n->left_child = NULL;
  n->right_child = NULL;
  return n;
}

int add_node(struct node *existing_node, int val) {
  if (existing_node->value <= val) {
    if (existing_node->right_child == NULL) {
      existing_node->right_child = create_node(val);
    }
    else {
      add_node(existing_node->right_child, val);
    }
  }
  else {
    if (existing_node->left_child == NULL) {
      existing_node->left_child = create_node(val);
    }
    else {
      add_node(existing_node->left_child, val);
    }
  }

  return 1;
}

void print_tree(struct node * n) {
  if (n != NULL) {
    print_tree(n->left_child);
    printf("%d\n", n->value);
    print_tree(n->right_child);
  }
}

int main() {
  int nums[] = { 1, 4, 6, 10, 30, 4, 40, 9 };
  struct node *root = create_node(nums[0]);

  int i;
  size_t nums_length = sizeof(nums) / sizeof(int);
  for (i = 1; i < nums_length; i++) {
    add_node(root, nums[i]);
  }

  print_tree(root);
}
