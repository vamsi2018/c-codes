#include<stdio.h>
#include<stdlib.h>
#define MAXHEAP 0
#define MINHEAP 1
struct heap{
	int *array;
	int size;
	int count;
	int type;
};
struct heap* createHeap(int size);
struct heap* percolateUp(struct heap* hp, int index);
struct heap* insertHeap(struct heap* hp,int number);
void swap(struct heap* hp, int i, int j);
struct heap* deleteFromHeap(struct heap* hp, int index);
struct heap* percolateDown(struct heap* hp, int index);
