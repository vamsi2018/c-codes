#include<stdio.h>
#include<string.h>

int main(){

	char str[]="ram babau";
	char *charPointer=str;
	//char* newP = strdup(charPointer);
	char* newP = strdup(str);
	printf("charP= %d newP = %d, newP Content=%s\n",sizeof(charPointer),sizeof(newP),newP);
	return 0;
}

