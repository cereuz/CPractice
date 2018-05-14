#include <stdio.h>

int main01(void)   //指针数组 
{
	int *a[10]; //定义一个指针数组，一共10个成员，其中每个成员都是 int * 类型
	printf("%d, %d\n", sizeof(a), sizeof(a[0])); 
	
	short *b[10]; //定义一个指针数组，一共10个成员，其中每个成员都是 short * 类型
	printf("%d, %d\n", sizeof(b), sizeof(b[0])); 
	
	char *c[10]; //定义一个指针数组，一共10个成员，其中每个成员都是 char * 类型
	printf("%d, %d\n", sizeof(c), sizeof(c[0])); 
	
	int a1;
	short a2;
	
	a[0] = &a1;
	b[0] = &a2; 
}


/*
 * 通过 **pp访问a    通过*pp访问p  ------- 二级指针 
 *  通过*p 访问 a   ------- 一级指针 
 */ 
int main()     //二级指针
{
	int a = 10;
	int *p = &a;
	int **pp = &p;  //定义一个二级指针，指向了一个一级指针的地址
	**pp = 100;   //通过二级指针修改内存的值
	
	printf("p的地址是：%d\n",*pp);    //这里 是访问了p的地址 
	 
	printf("a = %d\n", a);
	
	int ***ppp = &pp;  //定义一个三级指针，指向一个二级指针的地址
	***ppp = 22; 
	printf("a = %d\n", a);
	
	a =  ppp;   //等同于  a = &pp; 
	printf("%d, %d, %d, %d\n", ***ppp, &p, &pp, &ppp); 
	return 0; 
 } 
