#include <stdio.h>

int power10(int n)
{
	if(n == 0 || n == 1)
	   return n;
	int i;
	int value = 10; 
	for(i = 1; i < n; i++)
	{
		value *= 10;
	   }
	   return value;   
}

int main(void)
{
	int i = 0;
	scanf("%d", &i);
	int c = power10(i);
	printf("%d\n", c);
	return 0;
}

