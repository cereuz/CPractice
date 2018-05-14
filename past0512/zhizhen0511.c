#include <stdio.h>

/*
 *   const char *p;  //定义一个指向常量的指针   （不能通过*p的方法修改一个const指针，） 
 *   char *const p;  //定义一个指针常量，一旦初始化之后其内容不可改变。（指向的变量不可变，变量值可以变化） 
 */

int main01(void)
{
	float a = 3.14;
	int i = a; //自动数据类型转化，将浮点数的小数部分舍弃
	
	int *p = &a;  
	printf("%d\n", i);
	printf("%d\n", &i);
	printf("%d\n", &a);
	printf("%d\n", p); 
	printf("%d\n", *p); 
}

int main02(void)      //指针常量 
{
	int a = 10;
	int b = 60;
 	const int *p;   //p这个指针只能指向一个常量 
	p = &a;
//    *p = 20;      //不能通过*p的方法修改一个const指针
    a = 30; 
    printf("a = %d\n", a);
    
	p = &b;
	printf("p = %d\n", *p);   // *p是个只读的值，不能修改 
	return 0;
}

int main(void)   // 定义一个常量指针 
{
	int a = 10;
	int b = 30;
	int *const p = &a;   // 定义一个常量指针 。 可以通过常量指针修改或者读取一个变量的值 
	*p = 20;
	
//	p = &b;  //常量指针一旦定义了，那么就不能修改其指向的变量 
	printf("a = %d\n", *p);
	return 0; 
}
