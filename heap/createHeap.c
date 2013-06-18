#include "heap.h"

struct heap* createHeap(int size){
	struct heap* hp = malloc(sizeof(struct heap));
	if( hp == NULL ){
		printf("Insufficient Memory\n");
		return hp;
	}
	hp->size = size;
	hp->array = malloc(size*sizeof(int));
	return hp;
}
