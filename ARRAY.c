#include<stdio.h>
#include<conio.h>

int main()
{
int i,j,n=5,tosearch,found,pos,x,temp,c,location,minimum;
int arr[5]={1,2,3,4,5};
x:
printf(" enter:: \n ");
printf(" 1 for transvarsal:\n ");
printf(" 2 for reverse:\n ");
printf(" 3 for insertion:\n ");
printf(" 4 for deletion:\n ");
printf(" 5 for searching:\n ");
printf(" 6 for sorting:\n ");
printf(" 7 for searching max:\n ");
printf(" 8 for searching min:\n ");
printf(" 9 to exit:\n");
scanf("%d",&j);

switch(j)
{
	case 1 :
	{
		for(i=0;i<5;i++)
		{
			printf("%d\n",arr[i]);
		}
		break;
	 }

    case 2 :
   c = i - 1;
   i = 0;

   while (i < c)
   {
      temp = arr[c];
      arr[i] = arr[c];
      arr[j] = temp;
      i++;
      c--;
   }

   printf("\nResult of an Reverse array is: ");
   for (i = 0; i < 5; i++)
   {
      printf("%d \t", arr[i]);
   }
 		break;

	case 3 :
	{
		for (i = 0; i < 5; i++)
        arr[i] = i + 1;

    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    x = 50;

    pos = 5;

    n++;

    for (i = n; i >= pos; i--)
        arr[i] = arr[i - 1];

    arr[pos - 1] = x;


    for (i = 0; i < n; i++)
        printf("%d\n", arr[i]);
    printf("\n");


		break;
	 }
	case 4 :
	{
		printf("Enter the location where you wish to delete element\n");
   scanf("%d", &pos);

   if (pos >= n+1)
      printf("Deletion not possible.\n");
   else
   {
      for (i = pos - 1; i < n - 1; i++)
         arr[i] = arr[i+1];

      printf("Resultant array:\n");

      for (i = 0; i < n - 1; i++)
         printf("%d\n", arr[i]);
   }

		break;
	 }
	case 5 :
	{
	    printf("\nEnter element to search: ");
        scanf("%d", &tosearch);

        found = 0;

    for(i=0;i<5;i++)
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

		break;
   }
	case 6 :
	{
		  for (i = 0; i < n; ++i)
        {

            for (c = i + 1; c < n; ++c)
            {

                if (arr[i] > arr[c])
                {

                    temp =  arr[i];
                    arr[i] = arr[c];
                    arr[c] = temp;

                }

            }

        }

        printf("The numbers arranged in ascending order are given below \n");
        for (i = 0; i < n; ++i)
            printf("%d\n", arr[i]);

		break;
	 }
	case 7 :
	{
		for (i = 1; i < n; ++i)
        {
            if (arr[0] < arr[i])
            arr[0] = arr[i];
        }

    printf("Largest element = %d\n", arr[0]);
	break;
}


		case 8 :
	{
		minimum = arr[0];

    for (c = 1; c < 5; c++)
    {
        if (arr[c] < minimum)
        {
           minimum = arr[c];
           location = c+1;
        }
    }
        printf("Smallest number is %d\n",minimum);
		break;
	 }

        case 9:
            {
                return 0;

            }

}


goto x;
}
