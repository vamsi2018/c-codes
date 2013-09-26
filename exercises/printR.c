#include<stdio.h>
	char *str = "char *str = %c%s%c; main(){ printf(str, 34, str, 34);}";

int main()
{
    printf(str, 34, str, 34);
    return 0;
}
