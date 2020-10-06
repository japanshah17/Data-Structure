
#include<stdio.h> 

void swap(int* a, int* b) 
{ 
	int t = *a; 
	*a = *b; 
	*b = t; 
} 

int partition (int a[], int low, int high) 
{ 
	int pivot = a[high]; 
	int i = (low - 1);  
	int j;

	for (j = low; j <= high- 1; j++) 
	{ 
		if (a[j] < pivot) 
		{ 
			i++;
			swap(&a[i], &a[j]); 
		} 
	} 
	swap(&a[i + 1], &a[high]); 
	return (i + 1); 
} 

void quickSort(int a[], int low, int high) 
{ 
	if (low < high) 
	{ 
		int pivote = partition(a, low, high); 
		quickSort(a, low, pivote - 1); 
		quickSort(a, pivote + 1, high); 
	} 
} 

int main() 
{ 
	int array[] = {8,5,6,7,1}; 
	int n = 5;
	
	quickSort(array, 0, n-1); 
	
	printf("the array is:\n"); 
	int i; 
	for (i=0; i < n; i++) 
		printf("%d\n", array[i]); 

	return 0; 
} 

