/*
*
*	Given an array A of n elements. Find three indices i,j & k such that A[i]^2 + A[j]^2 = A[k]^2
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
	int *array,N,i,k,j;
	printf("Enter size: ");
	scanf("%d",&N);
	array = malloc(sizeof(int)*N);
	if(array == NULL){
		printf("\n no memory");
		return 0;
	}
	//Read array numbers
	for(i=0;i<N;i++){
		printf("\nEnter number ");
		scanf("%d",&array[i]);
	}

	for(i=0;i<N;i++){

		for(j=0;j<N;j++){
			if(j!=i)	
				for(k=0;k<N;k++){
					if(k!=i||k!=j)
						if(array[i]*array[i]+ array[j]*array[j] == array[k]*array[k]){
							printf("\ni = %d",i);
							printf("\nj = %d",j);
							printf("\nk = %d\n",k);
							return 0;
						}
						
				}
		}
	}
	printf("No i , j, k found");
	return 0;
}
