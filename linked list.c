#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int item;
  struct Node* next;
};

void insertb(struct Node** ref, int data)
{
  
  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  new_node->item = data;
  new_node->next = (*ref);
  (*ref) = new_node;
}

void inserta(struct Node* node, int data)
{
  if (node == NULL) 
  {
    printf("the given previous node cannot be NULL");
    return;
  }

  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  new_node->item = data;
  new_node->next = node->next;
  node->next = new_node;
}

void inserte(struct Node** ref, int data) {
  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  struct Node* last = *ref;

  new_node->item = data;
  new_node->next = NULL;

  if (*ref == NULL) 
  {
    *ref = new_node;
    return;
  }

  while (last->next != NULL)
    last = last->next;

  last->next = new_node;
  return;
}

void del(struct Node** ref, int key)
 {
  struct Node *temp = *ref, *prev;

  if (temp != NULL && temp->item == key) 
  {
    *ref = temp->next;
    free(temp);
    return;
  }
  while (temp != NULL && temp->item != key) 
  {
    prev = temp;
    temp = temp->next;
  }
  if (temp == NULL) return;

  prev->next = temp->next;

  free(temp);
}

void print(struct Node* node) 
{
  while (node != NULL) 
  {
    printf(" %d ", node->item);
    node = node->next;
  }
}

// Driver program
int main() 
{
  struct Node* head = NULL;

  inserte(&head, 1);
  insertb(&head, 2);
  insertb(&head, 3);
  inserte(&head, 4);
  inserta(head->next, 5);

  printf("Linked list: ");
  print(head);

  printf("\nAfter deleting an element: ");
  del(&head, 2);
  print(head);
  return 0;
}
