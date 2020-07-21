#include <stdio.h>

int MAXSIZE = 5;
int queue[5];
int rear = -1;
int front = -1;
int peek();
int dequeue();
int enqueue(int data);


int main()
{
    enqueue(3);
    enqueue(5);
    enqueue(9);
     //printing the queue elements

         if(front == -1 && rear == -1)
        {
            printf("queue is empty");
        }
        else
        {
             for(int i=0;i<=rear;i++)
            {

                printf("the element at %d is %d\n",i+1,queue[i]);
            }
             printf("element at front is %d\n",peek());
        }

   return 0;
}


int enqueue(int data)
 {

    if(rear == MAXSIZE-1)
    {
         printf("queue overflow");
    }
    else if(front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear]=data;
    }
    else
    {
        rear++;
        queue[rear]=data;
    }
 }

int dequeue()
 {
   int data;
   if(front == -1 && rear == -1)
    {
        printf("the queue is empty");
    }
    else if(front==rear)
    {
      front = rear = -1;
    }
    else
    {
        printf("dequeued element is : %d\n", queue[front]);
        front++;
    }


}
// 1 3 2
//f    r
int peek()
{
   return queue[front];
}


