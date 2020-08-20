#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* add;

};

int count = 0;

struct node* head = NULL;

void len(){
	int le = 0;
	struct node *temp = head;
	while(temp->add != NULL){
		temp = temp->add;
		le++;
	}
	printf("%d is the length\n",le+1);
}

void length(){
	printf("length is %d\n",count);	
}

void search(int item){
	int i = 1;
	struct node *temp = head;
	while(temp->add != NULL){
		if(temp->data == item){
			printf("%d is found at %d location\n",item,i);
		}
		i++;
		temp = temp->add;
	}
}

void append(int item){
	struct node* temp=(struct node *)malloc(sizeof(struct node));
	temp->data=item;
	temp->add = NULL;
	if(head == NULL){
		head = temp;
		count++;
	}
	else{
		struct node* tem;
		tem  = head;
		while(tem->add != NULL){
			tem = tem->add;
		}
		tem->add = temp;
		count++;	
	}
}

void prepend(int item){
	struct node* temp=(struct node *)malloc(sizeof(struct node));
	temp->data=item;
	temp->add = head;
	head = temp;
	count++;
}

void insert(int item , int pos){
	struct node* temp = (struct node *)malloc(sizeof(struct node));
	if(pos == 1){
		prepend(item);	
	}
	else{
			struct node* p = head,*q;
			int i=1;
			while(i<pos-1){
			p = p->add;
			i++;
		}
		q = p->add;
		p->add = temp;
		temp->add=q;
		temp->data=item;
		count++;
	}
}

void Delete(int pos){
	struct node* temp = (struct node *)malloc(sizeof(struct node));
	if(pos == 1){
		temp = head;
		head = temp->add;
		temp->add = NULL;
		free(temp);	
		count--;
	}
	else{
			struct node* p = head,*q;
			int i=1;
			while(i<pos-1){
			p = p->add;
			i++;
		}
		q = p->add;
		p->add = q->add;
		q->add=NULL;
		free(q);
		count--;
	}
}

void display() {

   struct node *ptr = head;
   printf("\n[head] =>");
   while(ptr != NULL) {        
      printf(" %d =>",ptr->data);
	  ptr=ptr->add;
   }
   printf(" [null]\n");
}

int main(){
	append(3);
	prepend(2);
	prepend(1);
	append(4);
	prepend(0);
	insert(-1,1);
	insert(5,7);
	display();
	len();
	search(2);
	return 0;
}		
