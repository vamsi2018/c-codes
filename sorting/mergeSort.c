#include<stdio.h>
#include<stdlib.h>

void mergeSort(int* array,int low, int high){
	int i=0,j=0,k=0;
	int *tempArray=malloc(sizeof(int)*(high-low+1));
	if(low == high)
		return;
	mergeSort(array,low,high/2);
	mergeSort(array,high/2+1,high);
	i=low;
	j=high/2+1;
	while(i<=high/2 && j<=high){
		if(array[i]<array[j]){
			tempArray[k]=array[i];
			i++;
			k++;
		}else{

			tempArray[k]=array[j];
			j++;
			k++;

		}

	}
	if(i>high/2){
		while(j<=high){
			tempArray[k]=array[j];
			j++;k++;
		}
	}
	if(j>high){
		while(i<=high/2){
			tempArray[k]=array[i];
			i++;k++;
		}
	}
//Copying sorted temp array to the original array
	i=low;
	for(k=0;k<(high-low);k++){
		array[i]=tempArray[k];
		i++;
	}
	free(tempArray);
}

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

	//Performing mergeSort
	mergeSort(array,0,N-1);
	printf("\nMerge sort performed\n");
	printf("Displaying sorted array\n");

	for(i=0;i<N;i++){
		printf("%d -> %d\n",i,array[i]);
		
	}

}
