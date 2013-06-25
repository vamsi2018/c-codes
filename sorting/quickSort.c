#include<stdio.h>
#include<stdlib.h>

void quickSort(int *array,int low,int high)
{
	if(high<=low)
		return;
	int pivot,pivotIndex,start,temp,oldPivotIndex;
	pivot=array[high];
	oldPivotIndex=pivotIndex=high;
	start=low;
	while(start<pivotIndex){
		if(array[start]>pivot){
		
			temp=array[start];
			array[start]=array[pivotIndex-1];
			array[pivotIndex-1] = pivot;
			array[pivotIndex]=temp;
			pivotIndex--;

		}else{

			start++;
		}

	}
	quickSort(array,low,pivotIndex-1);
	quickSort(array,pivotIndex+1,high);

}
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

	quickSort(array,0,N-1);
	printf("Quick sort performed\n");

	for(i=0;i<N;i++){
		printf("\n%d -> %d\n",i,array[i]);
	}

	return 0;
}
