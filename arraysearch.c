#include<stdio.h>

int main()
{
int arr[100];
int n=100,i,tosearch,found;

for(int j = 0;i < n;j++)
{
    arr[j] = j;
}

    printf("\nEnter element to search: ");
    scanf("%d", &tosearch);
    printf("%s\n",__TIME__);
    found = 0;

    for(i=0;i<n;i++)
    {

        if(arr[i] == tosearch)
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
    {
        printf("\n%d is found at position %d\n", tosearch, i + 1);
    }
    else
    {
        printf("\n%d is not found in the array\n", tosearch);
    }
 printf("%s\n",__TIME__);
 return 0;
}
