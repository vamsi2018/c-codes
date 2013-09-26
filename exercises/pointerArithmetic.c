#include<stdio.h>

int main(){
	int arr[5]={0,1,2,3,4};
	int *p[]={arr,arr+1,arr+2,arr+3,arr+4};
	int **ptr = &p;
	ptr++;
	printf("%d %u %d",ptr-p,*ptr-arr,**ptr);
	float f;
	float *fp=&f;
	float *ffp;
	ffp = fp+1;
	printf("\n %d",ffp-fp);
}
