#include <stdio.h>
/*
 * * 1.定义函数的时候，一定要指定形参的数据类型。 
 * * 2.实参可以是变量，常量或者表达式。 
 * * 3.形参 与 实参的数据类型一定要可兼容。 
 * * 4.如果C语言一个函数没有明确的表明函数的返回类型，那么函数的返回类型就是int ，默认是int 
 * * 5.在C语言中，实参与形参的数据传递是“值传递”，即单向传递，只能由实参传递给形参，不能反向传递。 
 */ 

int mystrlen(char str[])   // str 是形式参数    
{
	int len = 0;
	while (str[len++]);
	len--;
	return len;
 } 
 
 
 int max(int a, int b)   //自定义求最大值的函数   //形参一定是变量，不能是常量 
{
	int c = (a > b) ? a : b;
	return c;    //返回值一定要和函数的定义统一 
}
 
 
int  main()
{
	char s[] = "hello";
	int len = mystrlen(s);    //  s  是实际参数     实参可以是常量，也可以是变量 
	printf("len = %d\n",len);
	
	int m = 36;
	int n = 88;
	int p = 0;
	p = max(m - 14 , n + 8);
	printf("p = %d\n",p);
}


