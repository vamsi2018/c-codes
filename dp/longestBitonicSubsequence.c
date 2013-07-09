/*
*	Longest bitonic subsequence implementation
*	time complexity = O(n^2)
*	space complexity = O(n)
*	Subsequence of array A[] is called Bitonic if it is first strictly increasing and then strictly decreasing.
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int N,*arr,i,j,k,*lis,max,*lds;
	printf("Enter size of array : ");
	scanf("%d",&N);
	arr=malloc(sizeof(int)*N);
	lis=malloc(sizeof(int)*N);
	memset(lis,0,sizeof(int)*N);
	lds=malloc(sizeof(int)*N);
	memset(lds,0,sizeof(int)*N);
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
/*
	lds[i] = longest decreasing subsequence from lds[i] ... lds[N-1]
	lds[i] = 1+max(lds[j]) where j>i and arr[j]<arr[i] , if there is no such element then lds[i]=1
*/
	for(i=N-1;i>=0;i--){
		max=0;
		for(j=i;j<N;j++){
			if(arr[j]<=arr[i]){
				if(lds[j]>max)
					max=lds[j];
			}
		}
		lds[i]=1+max;
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
	}
	printf("\n");
	printf("lds\t");
	for (i=0;i<N;i++){
		printf("%d ",lds[i]);
	}
	printf("\n");
/*
	In order to calculate the longest bitonic subsequence
		calculate max(lis[i]+lds[i]-1) because lis[i] is the longest increasing subsequence from arr[0]
		to arr[i] and lds[i] is the longest decreasing subsequence from arr[i] to arr[N-1]. As we are 
		counting arr[i] twice we subtract 1 from the sum. When we find the maximum out of these, we get
		the length of the longest bitonic subsequence
*/

	for (i=0;i<N;i++){
		if(max<lis[i]+lds[i]-1)
			max=lis[i]+lds[i]-1;
	}

	free(lis);
	free(lds);
	free(arr);
	printf("Longest bitonic subsequence length::: %d\n",max);
	return 0;

}

