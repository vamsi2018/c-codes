/*
 *	Given an array A[], find the maximum j-i such that A[j] > A[i]. For
 *	example, Input:{34,8,10,3,2,80,30,33,1} and Output:6 (j=7, i=1)
 */
#include<stdio.h>
struct JI{
	int i,j;
};
/*
 *	Time Complexity = O(nlogn)
 *	T(n) = 2T(n/2) + O(n);
 *	Space Complexity = Recursive function stack;
 */
struct JI maxJI(int *array,int i,int j){
	struct JI ji;
	int k=0;
	if(i>=j){
		ji.i=i;
		ji.j=j;
		return ji;
	}
	int mid = (i+j)/2;
	struct JI ji1 = maxJI(array,i,mid);
	struct JI ji2 = maxJI(array,mid+1,j);

	for(k=mid+1;k<=j;k++){
		if(array[k]>array[ji1.i])
			ji1.j=k;
	}
	for(k=i;k<=mid;k++){
		if(array[k]<array[ji2.j])
			ji2.i=k;
	}
	if((ji1.j-ji1.i)>(ji2.j-ji2.i))
		return ji1;
	else
		return ji2;

}

int main(){
	int array[]={34,8,10,3,2,80,30,33,1};
	struct JI ji = maxJI(array,0,8);
	printf("Output : %d (j=%d,i=%d)",ji.j-ji.i,ji.j,ji.i);

}
