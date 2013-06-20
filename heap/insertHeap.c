#include "heap.h"

struct heap* insertHeap(struct heap* hp,int number){

	hp->array[hp->count]=number;
	hp=percolateUp(hp,hp->count);
	hp->count=(hp->count)+1;
	return hp;
}

struct heap* percolateUp(struct heap* hp, int index){
	if(index==0)
		return;

	if(hp->type==MAXHEAP){
		
		while(index>0&&hp->array[index] > hp->array[((index-1)/2)]){
			swap(hp,index,(index-1)/2);	
			hp = percolateUp(hp,(index-1)/2);
		}		

	}else{

		while(index>0&&hp->array[index] < hp->array[((index-1)/2)]){
			swap(hp,index,(index-1)/2);	
			hp = percolateUp(hp,(index-1)/2);
		}		
	}
	return hp;
}

void swap(struct heap* hp, int i, int j){

	int temp=0;
	temp=hp->array[i];
	hp->array[i]=hp->array[j];
	hp->array[j]=temp;
}
