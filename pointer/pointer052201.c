#include <stdio.h>
 
int main(void)
{
	int buf[3][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
	int(*p)[4];
	p = buf;
	
	printf("%p, %p, %p, %p, %p\n", buf, buf[0], &buf[0][0], p, buf[0][0]);
}
