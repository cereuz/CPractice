#include <stdio.h>


int add(int m, int n)
{
	return m + n;
}

int func1(int(*p)(int,int), int a, int b) //��һ��������ָ������ָ��
{
	return p(a, b);  //ͨ��ָ������ָ�����һ������ 
 } 

int main(void)
{
	int i = func1(add, 63, 36);   // add����������ͽлص����� 
	printf("i = %d\n", i);
	
	return  0; 
}
