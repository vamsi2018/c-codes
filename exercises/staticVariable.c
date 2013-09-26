#include<stdio.h>

int initializer(){
	return 20;
}

int main(){
//	static int i = initializer();
	static int i =20;
	return 0;
}
