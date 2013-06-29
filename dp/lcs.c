#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int max(int **array,int i, int j){
	if(array[i-1][j-1]>=array[i-1][j]){

		if(array[i-1][j-1]>=array[i][j-1])
			return array[i-1][j-1];
		else
			return array[i][j-1];
	}else{

		if(array[i-1][j]<=array[i][j-1])
			return array[i][j-1];
		else
			return array[i-1][j];
	}

}
int main(){
	char str1[100],str2[100];
	int i,j,lenLCS=0,len1,len2,**array,maxI=0,maxJ=0;
	printf("Enter first string : ");
	scanf("%s",str1);
	
	printf("\nEnter second string : ");
	scanf("%s",str2);

	len1 = strlen(str1);
	len2 = strlen(str2);

/*
*	array ==  s t r i n g 2
*		 s
*		 t
*		 r
*		 i
*		 n
*		 g
*		 1 
*/

	array=malloc(sizeof(int)*len1);
	for(i=0;i<len1;i++)
	{
		array[i]=malloc(sizeof(int)*len2);
		memset(array[i],0,sizeof(int)*len2);
	}

//Base condition setting 1st row
	for(i=0;i<len2;i++){
		if(str2[i]==str1[0]){
			array[0][i]=1;
		}else{
			if(i>=1)
				array[0][i]=array[0][i-1];
		}
	}
	
//Base condition setting 1st column
	for(i=0;i<len1;i++){
		if(str1[i]==str2[0]){
			array[i][0]=1;
		}else{
			if(i>=1)
				array[i][0]=array[i-1][0];
		}
	}

	for(i=1;i<len1;i++){
		for(j=1;j<len2;j++){
			if(str2[j] == str1[i]){
				array[i][j] = 1+array[i-1][j-1];
				if(array[i][j] > lenLCS){
					lenLCS = array[i][j];
					maxI = i;
					maxJ = j;
				}
			}else{
				array[i][j] = max(array,i,j);
			}
		}
	}

	for(i=0;i<len1;i++){
		for(j=0;j<len2;j++){
			printf("%d\t",array[i][j]);
		}
		printf("\n");
	}

	printf("Length of longest common subsequence : %d\n",lenLCS);
	char *lcs=malloc(sizeof(char)*(len1>len2?len1:len2));
	//Printing the longest common subsequence
	i=maxI;j=maxJ;
	while(i>=1&&j>=1){
		if(array[i][j-1]==array[i][j])
			j--;
		else if(array[i-1][j] == array[i][j])
			i--;
		else{
			sprintf(lcs,"%s%c",lcs,str1[i]);
	//		printf("\n%c",str1[i]);
	//		printf("\ni=%d j=%d",i,j);
			i--;j--;
		}
	}
	//Getting the first matched character
	//i--;
	//j--;
	int found=0;
	if(i==0&&j!=0){
		while(j>=0&&found!=1){
			if(array[i][j]==array[i][j-1]){
				j--;
			}else
				found=1;
		}
	}else if(i!=0&&j==0){
		while(i>=0&&found!=1){
			if(array[i][j]==array[i-1][j]){
				i--;
			}else
				found=1;
		}

	}
//	printf("\ni=%d j=%d",i,j);
	if(array[i][j]>0)
		sprintf(lcs,"%s%c",lcs,str1[i]);
	printf("Longest Common subsequence in reverse order is :");
	printf("\nlcs = %s\n",lcs);
	return 0;
}
