#include<stdio.h>
#include<string.h>
void printAllCombinationsOfString(char *string,char *combi,int base, int depth){
	int length=strlen(string),i=0;
	if(base>=length)
		return;
	for(i=base;i<length;i++){
		combi[depth] = string[i];
		combi[depth+1]='\0';
		printf("%s\n",combi);
		printAllCombinationsOfString(string,combi,i+1,depth+1);
	}
	return;
}

int main(){
	char str[]="ABC",combi[10];
	printAllCombinationsOfString(str,combi,0,0);

}
