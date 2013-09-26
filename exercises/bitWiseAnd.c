#include<stdio.h>
int main(){

int i=0,j=1,k=3;
while(k!=0){
	printf("\nEnter num1 : ");
	scanf("%d",&i);
	printf("\nEnter num2 : ");
	scanf("%d",&j);

	printf("\n%d & %d = %d",i,j,i&j);

	printf("\nEnter 0 to exit : ");
	scanf("%d",&k);
}
return 0;
}
