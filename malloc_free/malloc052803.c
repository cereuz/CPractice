#include <stdio.h>

/*
 *    堆，栈和内存映射 
 *         每个线程都有自己专属的栈（stack） ， 先进后出 （LIFO)
 *         栈的最大尺寸固定，超出则引起栈溢出     
 *         变量离开作用范围后，栈上的数据会自动释放  
 *         堆上内存必须手工释放（C/C++), 除非语言执行环境支持GC
 *        栈还是堆：1.明确知道数据占用多少内存， 1.1. 数据很小
 *                  2. 大量内存，  2.1   不确定需要多少内存      
 ×       
 ×    Code Area ： 程序代码指令，常量字符串，只可读 
 ×    Static Area ：存放全局变量/常量，静态变量/常量 
 ×    Heap ： 由程序员控制，使用 malloc / free 来操作 
 ×    Stack ： 预先设定大小，自动分配与释放。 
 ×    
 *     Data Area      Dynamic Area
 *
 *     C语言的函数参数，是从右往左的顺序入栈。 
 */
 
void print_array(int buf[])   //打印数组 
{
	int i;
	for(i = 0; i < 10; i++)
	{
		printf("buf[%d] = %d\n", i, buf[i]);
	}
}

int main(void)
{
	int i = 0;
	scanf("%d", &i);
	int *array = NULL;
	array =  malloc(sizeof(int) * i);
	print_array(array);
	printf("%d\n", sizeof(array));
	print_array(array);
	return 0;
}
