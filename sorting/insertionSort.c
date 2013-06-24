#include<stdio.h>
#include<stdlib.h>
int main(){
	int *array,i=0,N,j=0,temp=0;
	printf("Enter array size : ");
	scanf("%d",&N);

	array=malloc(sizeof(int)*N);
	if(array==NULL){
		printf("No memory!!!");
		return 0;
	}
	int exit=0;
	for(i=0;i<N;i++){
		printf("\nEnter number ");
		scanf("%d",&array[i]);
	}

	for(i=1;i<N;i++){
		temp = array[i];
		exit=0;
		for(j=i-1;j>=0&&exit!=1;j--){
			if(temp<array[j]){
				array[j+1]=array[j];
				array[j]=temp;
			}
			else{
//				array[j]=temp;
				exit=1;
			}
		}
//		array[++j]=temp;		
	}

	printf("Insertion sort performed\n");

	for(i=0;i<N;i++){
		printf("\n%d -> %d\n",i,array[i]);
	}

	return 0;
}
