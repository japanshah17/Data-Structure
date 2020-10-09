#include <stdio.h> 
 
struct node 
{ 
	int data; 
	struct node* left; 
	struct node* right; 
}; 

struct node* newNode(int data) 
{ 
	struct node* node = (struct node*)malloc(sizeof(struct node)); 
	node->data = data; 
	node->left = NULL; 
	node->right = NULL; 
	return(node); 
} 

void postorder(struct node* node) 
{ 
	if (node == NULL) 
		return; 
	postorder(node->left); 
	postorder(node->right); 
	printf("%d ", node->data); 
} 

void inorder(struct node* node) 
{ 
	if (node == NULL) 
		return;
	inorder(node->left); 
	printf("%d ", node->data); 
	inorder(node->right); 
} 

void preorder(struct node* node) 
{ 
	if (node == NULL) 
		return; 
	printf("%d ", node->data); 
	preorder(node->left);
	preorder(node->right); 
}	 


int main() 
{ 
	struct node *root = newNode(5); 
	root->left = newNode(3); 
	root->right = newNode(6); 
	root->left->left = newNode(2); 
	root->left->right = newNode(4); 

	printf("\nPreorder traversal of binary tree is \n"); 
	preorder(root); 

	printf("\nInorder traversal of binary tree is \n"); 
	inorder(root); 

	printf("\nPostorder traversal of binary tree is \n"); 
	postorder(root); 

	return 0; 
} 

