#include <stdio.h>

/*
 *  指针作为函数的返回值
 *
 *  指向函数的指针
 *      指针可以指向变量，数组，也可以指向一个函数 
 *      一个函数在编译的时候会分配一个入口地址，这个入口地址就是函数的指针，函数名称就代表函数的入口地址
 *      函数指针的定义方式： int(*p)(int); //定义了一个指向int func(int n)类型函数地址的指针
 *      1. 定义函数指针变量的格式为： 函数返回类型(*指针变量名称)(参数列表)
 *      2. 函数可以通过函数指针调用
 *      3. int(*p)() 代表指向一个函数，但不是固定哪一个函数 
 *
 *    void *p(int , char *); //声明了一个函数，函数的名字叫p，函数的返回值是void *, 函数的参数是 int 和 char*
 ×   void (*p)(int , char *); //定义了一个指向参数为int和char* ,返回值为 void的函数指针
 *
 *    int (*p)(int *);   //定义一个参数为int * 返回值为 int *的指向函数的指针                
 */ 

int add(int a, int b)
{
	return a + b;
}

int max(int a, int b)
{
	return a > b ? a : b;
}
 
 int main(void)
 {
 	int (*p)(int, int);  //定义了一个指向函数的指针。这个指针可以指向两个参数都是int ，返回值也是int 的这种类型的函数 
	p = add;  //直接写函数的名字，代表函数的地址，将add这个函数的地址赋值给指针变量p  
 	int m = 0;
 	m = p(6,9);
 	printf("add 求和m = %d\n", m); 	
 	
 	p = max;  //直接写函数的名字，代表函数的地址，将add这个函数的地址赋值给指针变量p  
 	m = p(6,9);
 	printf("max 最大值m = %d\n", m); 	
 	
 	int i = 0;
 	i = add(5, 7);
 	printf("普通求和 i = %d\n", i);
 	return 0;
 }
