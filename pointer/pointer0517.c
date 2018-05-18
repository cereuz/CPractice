#include <stdio.h>

/*
 * 指针变量 作为函数的参数 
 *     函数的参数可以是指针类型。  它的作用是将一个变量的地址传送给另一个函数
 *     通过函数的指针参数  可以间接的实现形参修改实参的值。 
 */ 

void test(int n)  //形参 
{
	n++;    
}

void test2(int *p)
{
	(*p)++;
}

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(void)
{
    int m = 10;
    int n = 20;
    swap(&m,&n);  //C语言通过指针，改变实参的值。C语言必须通过指针才能实现 
    printf("m = %d, n = %d\n", m, n);

	//经常使用指针访问数组
	int i = 100;  //实参 
	test(i);   //  形参的值改变，不影响实参的值 
	printf("i = %d\n", i);
	
	test2(&i);  
	printf("i = %d\n", i);
//	scanf("%d\n,", &i);//所有需要在函数内部修改实参的值，都需要通过将指针做为函数参数调用来实现 
	
	int a = 10;
	int *p = &a;
	*p = 100;
	printf("a = %d, &a = %d, p = %d, *p= %d\n", a, &a, p, *p); 
}
