#include <stdio.h>
#include <stdlib.h>
int main(){
	int *array,N,i=0,num=0,j=0,temp,min,index=0,k=0;
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
	
	for(i=0;i<N-1;i++){
		min = array[i];
		index = i;
		for(j=i;j<N;j++){
			if(array[j]<min){
				index=j;
				min=array[j];
			}
		}
		temp=array[index];
		array[index]=array[i];
		array[i]=temp;
/*		printf("Iteration %d\n",i);
		printf("min  %d \n",min);
		for(k=0;k<N;k++){
			printf("%d -> %d\n",k,array[k]);
			
		}
*/
	}
	
	printf("\nSelection sort performed\n");
	printf("Displaying sorted array\n");

	for(i=0;i<N;i++){
		printf("%d -> %d\n",i,array[i]);
		
	}
	
}

