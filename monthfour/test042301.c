/*
char 127  0111 1111
127+5     1000 0100

原码1000 0100
反码1111 1011
补码1111 1100

-64-32-16-8-4
-124
*/
#include <stdio.h>

int main()
{
	char a = 'a';
	printf("%c\n",a);
	printf("%d\n",a);
	
	a = 'A';
	printf("%c\n",a);
	printf("%d\n",a);
	
	a = '1';
	printf("%c\n",a);
	printf("%d\n",a);
	
	a = 1;
	printf("%c\n",a);
	printf("%d\n",a);
	
	return 0;
}