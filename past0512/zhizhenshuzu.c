#include <stdio.h>

void printArray(char s[])
{
	int i;
	for(i = 0; i < 10; i++)
	{
		printf("%d,  ", s[i]);
	}
	printf("\n");
	
	return ;
 } 

int main(void)
{
	char buf[10] = {0, 1, 2, 3, 4};
	char *p = buf;
	char *p0 = &buf[0];
	char *p1 = &buf[1];
	char *p2 = &buf[2];
	
	*p1 = 9;
	
	p2 += 1;
//	*p2 = 100;  
	
	printf("%d, %d, %d, %d\n", p, p0, p1, p2);
	printf("%d, %d, %d, %d\n", *p, *p0, *p1, *p2);
	printArray(buf);
	
	p2 -= 2;
	*p2 = 70;
	printf("%d, %d, %d, %d\n", p, p0, p1, p2);
	printf("%d, %d, %d, %d\n", *p, *p0, *p1, *p2);
	printArray(buf);
}
