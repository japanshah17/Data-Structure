#include <stdio.h> 

void merge(int arr[], int l, int m, int h) 
{ 
	int i,j,k=l; 
	
	
	int n1 = m - l + 1; 
	int n2 = h - m; 

	int L[n1], H[n2]; 
	
	for (i = 0; i < n1; i++) 
	{
		L[i] = arr[l + i];
	} 
	for (j = 0; j < n2; j++) 
	{
		H[j] = arr[m + 1 + j]; 
	}
	 i=0;
	 j=0;
	while (i < n1 && j < n2) { 
		if (L[i] <= H[j]) { 
			arr[k] = L[i]; 
			i++;
			k++; 
		} 
		else { 
			arr[k] = H[j]; 
			j++; 
			k++;
		} 
		 
	} 
	while (i < n1) { 
		arr[k] = L[i]; 
		i++; 
		k++; 
	} 

	while (j < n2) { 
		arr[k] = H[j]; 
		j++; 
		k++; 
	} 
} 

void mergeSort(int arr[], int l, int h) 
{ 
	if (l < h) { 
	
		int m = l + (h - l) / 2; 

		mergeSort(arr, l, m); 
		mergeSort(arr, m + 1, h); 
		merge(arr, l, m, h); 
	} 
} 

int main() 
{ 
	int arr[] = { 12, 11, 13, 5, 6, 7 }; 
	int n = 6; 

	mergeSort(arr, 0, n - 1); 

	printf("\nSorted array is \n"); 
	int i; 
	for (i = 0; i < n; i++) 
		printf("%d ", arr[i]); 
	printf("\n"); 
	return 0; 
} 

