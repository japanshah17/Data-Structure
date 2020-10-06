#include<stdio.h>

#define N 5

int main(){
	int array[N] = {8,5,6,7,1};
	int i,j,min;
	
	for(i=0;i<N-1;i++){
		min = i;
		for(j=i+1;j<N;j++){
			if(array[min]>array[j]){
				min = j;
			}
		}
		int temp;
		temp = array[i];
		array[i] = array[min];
		array[min] = temp;
	}
	
	printf("the array is:\n");		
	for(i=0;i<N;i++){
		printf("%d\n",array[i]);
	} 
}
