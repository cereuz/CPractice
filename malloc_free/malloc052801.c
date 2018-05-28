#include <stdio.h>

int *geta()   // 错误，不能将一个 栈变量的地址通过函数的返回值返回。 
{
	int a = 0;
	return &a;
}

int *geta1()  //可以通过函数的返回值返回一个堆地址，但记得，一定要free 
{
	int *p = malloc(sizeof(int));  //通过 malloc 申请了一个堆空间
	return p; 
}

int *geta2()
{
	static int a = 0;   // 静态 分配  内存空间。 一直有效 
	return &a;
 } 

int main(void)
{
	int *getp = geta2();
	*getp = 100;
	printf("%d, %d\n", *getp, getp); 
	free(getp);  //释放通过malloc申请的内存 
}
