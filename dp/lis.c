/*
*	Longest increasing subsequence implementation
*	time complexity = O(n^2)
*	space complexity = O(n)
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int N,*arr,i,j,k,*lis,max;
	printf("Enter size of array : ");
	scanf("%d",&N);
	arr=malloc(sizeof(int)*N);
	lis=malloc(sizeof(int)*N);
	memset(lis,0,sizeof(int)*N);
	for(i=0;i<N;i++)
		scanf("%d",&arr[i]);
/*
	lis[i] = longest increasing subsequence from lis[0] ... lis[i]
	lis[i] = 1+max(lis[j]) where j<i and arr[j]<=arr[i] else lis[i]=1
*/
	for(i=0;i<N;i++){
		max=0;
		for(j=0;j<i;j++){
			if(arr[j]<=arr[i]){
				if(lis[j]>max)
					max=lis[j];
			}
		}
		lis[i]=1+max;
	}
	printf("\n");
	printf("arr\t");
	for (i=0;i<N;i++)
		printf("%d ",arr[i]);
	printf("\n");
	printf("lis\t");
	max=0;
	for (i=0;i<N;i++){
		printf("%d ",lis[i]);
		if(max<lis[i])
			max=lis[i];
	}
	printf("\n");

	printf("Longest increasing subsequence ::: %d\n",max);
	return 0;

}
