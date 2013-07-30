/*
*	Given a string, print all the permutations of the string
*/
#include<stdio.h>

void swap(char *swapFrom, char *swapTo){
	
	char temp;
	temp = *swapFrom;
	*swapFrom = *swapTo;
	*swapTo = temp;	
	return;
}
void permute(char *string,int i,int len){
	int j=0;
	if(i==len-1){
		printf("%s\n",string);
		return;
	}
	
	for(j=i;j<len;j++){
		swap(string+i,string+j);//This swap is the crux of permutation. The for loop ensures that all the characters gets all the positions

		permute(string,i+1,len);//This recursive call permutes the characters from i+1 to end. So here the characters from 0 to i are fixed and rest of the characters are permuted.

		swap(string+i,string+j);//This swapping puts the characters swapped in line 22 in their original place. Basically this is backtracking

	}
	return;
}

int main(){
	char string[10]="ABCD";
	printf("Permutations of string %s are::\n",string);
	permute(string,0,4);

}
