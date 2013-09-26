#include<stdio.h>
void printNegativeIndices(int *ptr){
/*
	If one is sure that elements exist, it is also possible to index backwards in an array, ptr[-1] is legal and refer to the elements preceding ptr[0]. Ofcourse, it is illegal to refer to objects that are not within the array bounds.
*/
	printf("%d %d \n",ptr[-1],ptr[-2]);
	return;
}

int main(){
	int array[]={1,2,3,4,5,6,7,8};
	printNegativeIndices(array+3);
	return 0;

}
