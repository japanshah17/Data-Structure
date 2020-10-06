#include<stdio.h>

#define N 5

int main(){
	int array[N] = {8,5,6,7,1};
	int i,j;
	
	for(i=0;i<N-1;i++){
		for(j=0;j<N-1;j++){
			if(array[j]>array[j+1]){
				int temp;
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
	
	printf("the array is:\n");		
	for(i=0;i<N;i++){
		printf("%d\n",array[i]);
	} 
}
