#include<stdio.h>
char* getString(){
	return "ABC";
}
int main(){
	char *str;
//	str="Hello";
	str=getString();
	str[1]='H';
	return 0;
}
