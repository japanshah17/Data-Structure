#include<stdio.h>

int factorial(int n);

int main()
{
    int no;
    printf("Enter a number : ");
    scanf("%d",&no);
    printf("the factorial is %d \n",factorial(no));
    return 0;
}
int factorial(int n)
{
    if(n>0)
        return n*factorial(n-1);
    else
        return 1;
}
