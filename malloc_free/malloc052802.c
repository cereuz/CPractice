#include <stdio.h>

void getheap(int *p)
{
	printf(" p = %p\n", &p);
	p = malloc(sizeof(int) * 10);
}  //getheap ִ����֮��p����ʧ�ˣ�������ָ��ľ���ѿռ�ĵ�ַ���Ҳ��֮��ʧ�ˡ�  

int main01(void)
{
	int *p = NULL;
	printf(" p = %p\n", &p);
	getheap(p);  //ʵ��û���κθı� �� ������һ����ָ�롣 
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
