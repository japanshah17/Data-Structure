#include<stdio.h>
#include<ctype.h>
int main()
{
int arr[100],n=100;
int i,x,h,l,mid,time;

for(int j = 0;i < n;j++)
{
    arr[j] = j;
}

 h=n-1;
 l=1;

 printf("Enter a number to be searched: \n");
 scanf("%d",&x);
 printf("%s\n",__TIME__);
  while(h>=l)
   {
    mid =( h + l)/2;
    if(x == arr[mid])
     {
      printf("%d is at location %d\n",x,mid+1);
      break;
     }
      else if(x > arr[mid])
      {
       l = mid + 1;
      }
     else
      {
       h = mid - 1;
      }
    }
printf("%s\n",__TIME__);
return 0;
}

