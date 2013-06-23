#include <stdio.h>
#include <stdlib.h>
int main(){
	int *array,N,i=0,num=0,j=0,temp;
	printf("Enter size of array ");
	scanf("%d",&N);
	array = malloc(sizeof(int)*N);
	if(array == NULL){
		printf("No memory!!!");
		return 0;
	}

	for(i=0;i<N;i++){
		printf("\nEnter number ");
		scanf("%d",&array[i]);
		
	}
	
	for(i=N-2;i>=0;i--){
		for(j=0;j<=i;j++){
			if(array[j]>array[j+1]){
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
	
	printf("\nBubble sort performed\n");
	printf("Displaying sorted array\n");

	for(i=0;i<N;i++){
		printf("%d -> %d\n",i,array[i]);
		
	}
	
}
