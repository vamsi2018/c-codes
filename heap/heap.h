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
