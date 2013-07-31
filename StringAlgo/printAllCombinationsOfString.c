#include<stdio.h>
#include<string.h>
void printAllCombinationsOfString(char *string,int base,int depth,char *combi){
	int length = strlen(string);
	if(base>=length)
		return;
	int i=0,j=0;
	for(j=base;j<length;j++){
		combi[depth] = string[j];
		combi[depth + 1] = '\0';
		printf("%s\n",combi);
		printAllCombinationsOfString(string,j+1,depth+1,combi);	
	}
	
	return;
}

int main(){
	char str[10]="ABC";
	char combi[10];
	printAllCombinationsOfString(str,0,0,combi);

}
