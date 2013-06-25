#include<stdio.h>
#include<stdlib.h>

void mergeSort(int* array,int low, int high){
	int i=0,j=0,k=0,mid=0;

	if(low >= high)
		return;
	mid = (low+high)/2;
	mergeSort(array,low,mid);
	mergeSort(array,mid+1,high);
	int *tempArray=malloc(sizeof(int)*(high-low+1));
	i=low;
	j=mid+1;
	while(i<=mid && j<=high){
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
	if(i>mid){
		while(j<=high){
			tempArray[k]=array[j];
			j++;k++;
		}
	}
	if(j>high){
		while(i<=mid){
			tempArray[k]=array[i];
			i++;k++;
		}
	}
//Copying sorted temp array to the original array
	i=low;
	for(k=0;k<=(high-low);k++){
		array[i]=tempArray[k];
		i++;
	}
	free(tempArray);
	return;
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
