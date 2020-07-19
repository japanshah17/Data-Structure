#include <stdio.h>

int MAXSIZE = 8;
int stack[8];
int top = -1;

int isempty();
int isfull();
int peek();
int pop();
int push(int data);
int peep(int i);

int main()
{
   // push items on to the stack
   push(3);
   push(5);
   push(9);
   push(1);
   push(12);
   push(15);


   printf("Element at top of the stack: %d\n" ,peek());
   printf("Elements: \n");

   while(!isempty())
    {
      int data = pop();
      printf("%d\n",data);
    }
if(isfull())
{
    printf("full\n");
}
else
{
    printf("not full\n");

}
peep(5);

   return 0;
}
int isempty()
 {

   if(top == -1)
      return 1;
   else
      return 0;
}

int isfull()
 {

   if(top == MAXSIZE)
      return 1;
   else
      return 0;
}

int peek() {
   return stack[top];
}

int pop()
 {
   int data;

   if(!isempty())
    {
      data = stack[top];
      top = top - 1;
      return data;
   } else
   {
      printf("Could not retrieve data, Stack is empty.\n");
   }
}

int push(int data)
 {

   if(!isfull())
   {
      top = top + 1;
      stack[top] = data;
   } else
   {
      printf("Could not insert data, Stack is full.\n");
   }
}
int peep(int i)
{
    printf("the element at %d is %d",i,stack[MAXSIZE-i+1]);
}



