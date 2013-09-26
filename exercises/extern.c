#include<stdio.h>
extern int a =0;
int main(){
	extern int a =7;
	printf("%d",a);
}
