#include <stdio.h>

int main(void)
{
	int i = 0x12345678;  //小端对齐  78 ,  56 , 34 , 12
	unsigned char *p = &i;
	printf("%x, %x, %x, %x\n", p[0], p[1], p[2], p[3]);
	printf("%x, %x, %x, %x\n", *p  , *(p+1), *(p+2), *(p+3));
	
	//定义一个指向常量的指针 ，可以指向不同地址，但不能通过*p这种方式间接修改变量的值 
	const int *p1 = &i;   //只能读，不能直接修改值 
	printf("i = %x\n", *p1); 
	
	//定义一个指针常量，一旦初始化，其指向的变量地址不可以改变 。只能指向初始化时候指向的变量地址，不可以修改指向地址 
	int *const p2 =  
	return 0;
}
