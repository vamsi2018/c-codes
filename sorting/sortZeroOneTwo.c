/*
	Sort an array of zero, one and two
	This is O(n) algorithm.
	We have to do two linear passes.
	In the first pass, push all the twos to end
	In the second pass, push all the zeroes to start
	Finally, all ones will automaticaly be in the middle. Hence we got the sorted array.
*/
#include<stdio.h>
#include<stdlib.h>


int * sortZeroOneTwo(int *array,int N){
	int i=0,start=0,end=N-1,temp;
	while(array[end]==2){
		end--;
	}
	for(i=0;i<=end;i++){
		if(array[i]==2){
			temp=array[i];
			array[i]=array[end];
			array[end]=temp;
		}
		while(array[end]==2){
			end--;
		}
	}
	while(array[start]==0){
		start++;
	}
	for(i=end;i>=start;i--){
		if(array[i]==0){
			temp=array[i];
			array[i]=array[start];
			array[start]=temp;
		}
		while(array[start]==0){
			start++;
		}
	}

}
int main(){
	int array[]={1,0,1,0,2,1,0,1,2,0,2,2,2,1,0},i=0,N=0;
	N=sizeof(array)/sizeof(int);

	printf("Array size = %d\n",N);
	printf("Original array\n");
	for(i=0;i<N;i++){
		printf("%d ",array[i]);
	}
	sortZeroOneTwo(array,N);
	printf("\nSorted array\n");
	for(i=0;i<N;i++){
		printf("%d ",array[i]);
	}
	printf("\n");
}
