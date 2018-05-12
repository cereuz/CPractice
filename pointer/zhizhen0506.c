#include <stdio.h>

int main01()
{
	int a = 0;
	int b = 10;
	char c[20] = {0};
	printf("%p , %p , %p , %p\n", &a ,  &b , &c , c);
	
	int p = &a;   //得到变量a的地址，将这个地址赋值给变量p
	printf("%X\n", p); 
	//地址虽然是一个整数，但地址是一个特殊的整数，是不能直接通过整数来操作的
	int *p1;  //定义一个变量，名字叫 p1，它可以指向一个int的地址
	p1 = &b; //指针变量的值一般不能直接赋值一个整数，而是通过取变量地址的方式赋值
	 
	return 0;
}

int main(void)
{
	int a = 1;
	int *p;
	p = &a;
	// *p的意思是指针变量指向内存的内容
	int b = *p;
	printf("%d\n",b);
	
	*p = 10; // 通过指针简介的修改 通过指针简介的修改指针指向变量的值 
	printf("a = %d\n", a); 
	return 0;
}
