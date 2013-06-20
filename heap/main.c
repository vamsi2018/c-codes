#include "heap.h"

int main(){

	int arraySize;
	printf("Enter the size of the array in heap ");
	scanf("%d",&arraySize);
	struct heap* hp = createHeap(arraySize);
	int exit=0;
	printf("\nplease enter number to insert into the heap [enter -1 to exit] : ");
	scanf("%d",&exit);
	while(exit != -1){
		hp=insertHeap(hp,exit);
		printf("\nplease enter number to insert into the heap [enter -1 to exit] : ");
		scanf("%d",&exit);
	}

	printf("\n Displaying heap array \n");
	int i=0;
	while(i<hp->count){
		printf("%d -> %d \n",i,hp->array[i]);
		i++;
	}

	printf("Give the index number to remove from heap : ");
	scanf("%d",&exit);
	hp = deleteFromHeap(hp,exit);


	printf("\n Displaying heap array \n");
	i=0;
	while(i<hp->count){
		printf("%d -> %d \n",i,hp->array[i]);
		i++;
	}
	return 0;
}
