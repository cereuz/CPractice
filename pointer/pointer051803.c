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
 */ 

char *mystrchr(char *s, char c)    //指针作为函数的返回值 
{
	while(*s)
	{
		if(*s == c)
		   return s;
		s++;
	}
	return NULL;
}

int main(void)
{
	char str[100] = "hello world";
	char *s = mystrchr(str, 'e');
	printf("s = %s\n", s);
	char *s1 = strchr(str, 'o');
	printf("s1 = %s\n", s1);
}
