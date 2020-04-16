#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int value;
  struct node *next;
} node_t;

void print_list(node_t *list) {
  int i = 0;
  node_t *current = list;
  while (current != NULL) {
    printf("list item[%d]: %d\r\n", i, current->value);
    current = current->next;
    i++;
  }
}

void push(node_t *head, int val) {
  node_t *current = head;
  while (current->next != NULL) {
    current = current->next;
  }
  current->next = (node_t *)malloc(sizeof(node_t));
  current->next->value = val;
  current->next->next = NULL;
}

int main() {

  // builds linked list
  int n = 10;
  node_t *linked_list = (node_t *)malloc(sizeof(node_t));
  linked_list->value = 0;
  linked_list->next = NULL;
  int i;
  for (i = 1; i < n; i++) {
    push(linked_list, i);
  }
  printf("Linked list: \r\n");
  print_list(linked_list);
  return 0;
}
