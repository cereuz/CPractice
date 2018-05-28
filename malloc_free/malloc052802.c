#include <stdio.h>

void getheap(int *p)
{
	printf(" p = %p\n", &p);
	p = malloc(sizeof(int) * 10);
}  //getheap 执行完之后，p就消失了，导致他指向的具体堆空间的地址编号也随之消失了。  

int main01(void)
{
	int *p = NULL;
	printf(" p = %p\n", &p);
	getheap(p);  //实参没有任何改变 。 这里是一个空指针。 
	printf("p = %d\n", p);
//	p = malloc(sizeof(int) * 10);
	p[0] = 1;
	p[1] = 2;
	printf("p[0] = %d, p[1] = %d\n", p[0], p[1]);
	free(p);
	return 0;
}



void getheap1(int **p)
{
	printf(" p = %p\n", &p);
	*p = malloc(sizeof(int) * 10);
}    

int main(void)
{
	int *p = NULL;
	printf(" p = %p\n", &p);
	getheap1(&p);  
	printf("p = %d\n", p);
//	p = malloc(sizeof(int) * 10);
	p[0] = 1;
	p[1] = 2;
	printf("p[0] = %d, p[1] = %d\n", p[0], p[1]);
	free(p);
	return 0;
}
