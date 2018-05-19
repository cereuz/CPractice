#include <stdio.h>

void print_array(int *s, int n)  //打印数组的函数 
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("%d, ", s[i]);
	}
	printf("\n");
}


int main(void)
{
	// void *p(int, char *);  //声明了一个函数，函数的名字叫p，函数的返回值是 void *  ,函数的参数类型是int 和  char* 
	// void (*p)(int, char *);  //定义了一个指向函数的指针，指向参数为int和char* , 返回值为void的函数指针 
	// int *(*p)(int *);      //定义一个参数为int*  返回值为int * 的指向函数的指针 
	
	int (*p)(int, int);  //定义了一个指向函数的指针，指针指向两个函数，都是int返回值也是int 
	
	p = print_array;  //类型不同的赋值，这种语句在C++中是编译通不过的。
	 
	int buf[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	p(buf, 10);
	return 0;
}
