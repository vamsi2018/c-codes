/*
*	Longest decreasing subsequence implementation
*	time complexity = O(n^2)
*	space complexity = O(n)
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int N,*arr,i,j,k,*lds,max;
	printf("Enter size of array : ");
	scanf("%d",&N);
	arr=malloc(sizeof(int)*N);
	lds=malloc(sizeof(int)*N);
	memset(lds,0,sizeof(int)*N);
	for(i=0;i<N;i++)
		scanf("%d",&arr[i]);
/*
	lds[i] = longest decreasing subsequence from lds[0] ... lds[i]
	lds[i] = 1+max(lds[j]) where j<i and arr[j]>=arr[i] else lds[i]=1
*/
	for(i=0;i<N;i++){
		max=0;
		for(j=0;j<i;j++){
			if(arr[j]>=arr[i]){
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
	printf("lds\t");
	max=0;
	for (i=0;i<N;i++){
		printf("%d ",lds[i]);
		if(max<lds[i])
			max=lds[i];
	}
	printf("\n");

	printf("Longest decreasing subsequence ::: %d\n",max);
	return 0;

}

