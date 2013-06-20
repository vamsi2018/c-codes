#include "heap.h"

struct heap* insertHeap(struct heap* hp,int number){

	hp->array[hp->count]=number;
	hp=percolateUp(hp,count);
	count++;
	return hp
}

struct heap* percolateUp(struct heap* hp, int index){

	if(hp->type==MAXHEAP){
		
		while(hp->array[hp->count] > hp->array[((hp->count-1)/2)]){
			swap(hp,count,(count-1)/2);	
		}		

	}else{

		while(hp->array[hp->count] < hp->array[((hp->count-1)/2)]){
			swap(hp,count,(count-1)/2);	
		}		
	}
}

void swap(struct heap* hp, int i, int j){

	int temp=0;
	temp=hp->array[hp->i];
	hp->array[hp->i]=hp->array[hp->j];
	hp->array[hp->j]=temp;
}
