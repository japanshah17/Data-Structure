#include <stdio.h> 

#define n 5

int main() 
{ 
	int array[5] = {8,5,6,7,1}; 
	int i, key, j;
	
	for (i = 1; i < n; i++) { 
		key = array[i]; 
		j = i - 1; 
		while (j >= 0 && array[j] > key) { 
			array[j + 1] = array[j]; 
			j = j - 1; 
		} 
		array[j + 1] = key; 
	} 
 
	for (i = 0; i < n; i++) 
		printf("%d \n", array[i]); 

	return 0; 
} 

