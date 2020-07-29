#include <stdio.h>

int MAXSIZE = 5;
int queue[5];
int rear = -1;
int front = -1;
int enqueue(int data);
int dequeue();
int peek();

int main()

{
enqueue(1);
enqueue(2);
enqueue(3);
enqueue(4);
enqueue(5);
dequeue();
dequeue();
dequeue();
dequeue();
dequeue();

printf("element at front is %d\n",peek());


return 0;
}


int enqueue(int data)
 {

    if((rear == MAXSIZE-1 && front==0) || front-rear==1)
    {
         printf("queue overflow\n");
    }
    else if(front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear]=data;
    }
    else if(front>0 && rear==MAXSIZE-1)
    {
        rear=0;
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
   if((front == -1 && rear == -1))
    {
        printf("the queue is empty");
    }
    else if(front == 0 && rear == 0)
    {
        front = rear = -1 ;
    }
    else if(front==MAXSIZE-1)
    {
         printf("dequeued element is : %d\n", queue[front]);
        front=0;
    }
    else
    {
        printf("dequeued element is : %d\n", queue[front]);
        front++;
    }


}
int peek()
{
   return queue[front];
}


