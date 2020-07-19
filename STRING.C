#include<stdio.h>
#include<conio.h>

int length(char a[])
{
    int i=0,len=0;
    while(a[i]!='\0')
 	{
 		len++;
 		i++;
 	}
 	return len;
}
void compare(char a[] , char b[])
{
	int i = 0, flag = 0;
	while(a[i]!='\0' && b[i]!='\0')
	{
		if(a[i]!=b[i])
		{
        flag = 1;
        break;
		}
		i++;
	}
	if(flag == 0 && a[i] == '\0' && b[i] == '\0')
        printf("Both strings are same\n");
    else
        printf("Both strings are not same\n");
}
void reverse(char a[])
{
    char d[20];
    int i=0,j=0;
    int len=length(a);
    for(i=len-1;i>=0;i--)
    {
        d[j] = a[i];
        j++;
    }
    printf("the reverse string is : ");
    puts(d);
    printf("\n");
}
void concanate(char a[],char b[])
{
    char c[40];
    int i,j,len;
    len=length(a);
    for(i=0;a[i]!='\0';i++)
     {
         c[i] = a[i];
     }
     for(j=0,i=len-1;b[j]!='\0';j++,i++)
     {
         c[i] = b[j];
     }

     printf("the concatenated string is : ");
     puts(c);
     printf("\n");
}

//void insert()
//{
//    printf("Enter a string:");
//	gets(a);
//
//	printf("Enter string to insert :");
//	gets(b);
//}

//void delete()
//{
//    printf("Enter a string:");
//	gets(a);
//
//	printf("Enter string to delete :");
//	gets(b);
//}

void upper()
{
    char a[20];
    int i;
printf("Enter string for upper:");
gets(a);
for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='a' && a[i]<='z')
        {
            a[i]=a[i]-32;
        }

    }
printf("%s\n",a);
}
void lower()
{
    char a[20];
    int i;
printf("Enter string for lower:");
gets(a);
for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='A' && a[i]<='Z')
        {
            a[i]=a[i]+32;
        }

    }
printf("%s\n",a);
}

void substring(char a[])
{
    int pos,l;
    char sub[20];
    printf("enter position and length of a substring:");
    scanf("%d%d",&pos,&l);
    int i=0;
    while(i<l)
    {
     sub[i]=a[pos+i-1];
     i++;
    }
    puts(sub);
}
int main()
{
	char a[20],b[20];
	int r;


	printf("Enter a string:");
	gets(a);

    r = length(a);
    printf("the length is %d\n",r);

	printf("Enter second string:");
	gets(b);

compare(a,b);

reverse(a);

concanate(a,b);

upper();

lower();

substring(a);
 return 0;
}
