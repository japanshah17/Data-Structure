#include<stdio.h>

int hcf(int n, int m);

int main()
{
    int no,nu;
    printf("Enter two numbers : ");
    scanf("%d",&no,&nu);
    printf("the GCD is %d \n",hcf(no,nu));
    return 0;
}
int hcf(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            return hcf(a - b, b);
        }
        else
        {
            return hcf(a, b - a);
        }
    }
    return a;
}
