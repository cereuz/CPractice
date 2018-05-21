#include <stdio.h>


int add(int m, int n)
{
	return m + n;
}

int func1(int(*p)(int,int), int a, int b) //第一个参数是指向函数的指针
{
	return p(a, b);  //通过指向函数的指针调用一个函数 
 } 

int main(void)
{
	int i = func1(add, 63, 36);   // add函数在这里就叫回调函数 
	printf("i = %d\n", i);
	
	return  0; 
}
