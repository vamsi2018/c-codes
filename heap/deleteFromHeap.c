#include "heap.h"

struct heap* deleteFromHeap(struct heap* hp, int index){
	int num = hp->array[hp->count];
	hp->array[index]=num;
	hp->count=hp->count-1;
	hp=percolateDown(hp,index);
	return hp;

}

struct heap* percolateDown(struct heap* hp, int index){
	if(index>=hp->count)
		return hp;
	int num = hp->array[index];
	if(2*index+1 > hp->count)
		return hp;
	if(2*index+2 > hp->count){
		if(hp->type==MAXHEAP)
			if(num<hp->array[2*index+1])
				swap(hp,index,2*index+1);
		else
			if(num>hp->array[2*index+1])
				swap(hp,index,2*index+1);
			
		return hp;
	}

	int num1 = hp->array[2*index+1];
	int num2 = hp->array[2*index+2];

	if(hp->type==MAXHEAP){

		if(num1>num2&&num<num1){
			swap(hp,index,2*index+1);
			hp=percolateDown(hp,2*index+1);
			return hp;
		}else if(num2>num1&&num<num2){

			swap(hp,index,2*index+2);
			hp=percolateDown(hp,2*index+2);
			return hp;

		}else{

			return hp;
		}
	}else{
		if(num1<num2&&num>num1){
			swap(hp,index,2*index+1);
			hp=percolateDown(hp,2*index+1);
			return hp;
		}else if(num2<num1&&num<num2){

			swap(hp,index,2*index+2);
			hp=percolateDown(hp,2*index+2);
			return hp;

		}else{

			return hp;
		}
	}	
	return hp;

}
