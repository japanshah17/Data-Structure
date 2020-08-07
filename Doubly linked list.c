#include <stdio.h> 
#include <stdlib.h> 

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
void printList(struct node* n) 
{ 
	while (n != NULL) 
	{ 
		printf(" %d ", n->data); 
		n = n->next; 
	} 
} 
int main() 
{

struct node *head;
struct node *one = NULL;
struct node *two = NULL;
struct node *three = NULL;

one = malloc(sizeof(struct node));
two = malloc(sizeof(struct node));
three = malloc(sizeof(struct node));

one->data = 1;
one->next = two;
one->prev = NULL;

two->data = 2;
two->next = three;
two->prev = one;

three->data = 78;
three->next = NULL;
three->prev = two;

head = one;
printList(head);
}
