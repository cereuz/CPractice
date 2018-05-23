#include <stdio.h>

//使用 memcpy 的时候，一定要确保内存没有重叠区域。
/*
 * int i     定义整形变量
 * int *p    定义一个指向int的指针变量
 * int a[10]  定义一个int数组
 * int *p[10]  定义一个指针数组，其中每个数组元素指向一个int类型变量的地址
 * int (*p)[10] 定义一个数组指针，指向int[10]类型的指针变量
 * int func()  定义一个函数，返回值为   int 类型
 * int *func()  定义一个函数，返回值为   int* 类型
 * int (*p)()   定义一个指向函数的指针，函数的原型为无参数，返回值为int
 * int **p     定义一个指向int的指针的指针，二级指针 
 */ 

 //打印数组
 void print_array(int buf[])
 {
 	int i = 0;
 	for(i = 0; i < 10; i++)
 	{
 		printf("buf[%d] = %d\n", i, buf[i]);
	 }
  } 

int main01(void) 
{
	int buf[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int *start  =  buf + 3;
	int *end = buf + 5;
	
	memcpy(start, end, 4);
	
	print_array(buf);
	return 0;
}

int main02(void)
{
	//指针数组 
	int *p[3];  //定义了一个指针数组，有三个成员，每个成员都是int*
	int a = 1;
	int b = 2;
	int c = 3;
	p[0] = &a; 
	p[1] = &b; 
	p[2] = &c; 
	printf("%d, %d, %d, %d, %d, %d, %d, %d, %d\n", a, b, c, p[0], p[1], p[2], *p[0], *p[1], *p[2]);
	*p[0] = 10;  //通过指针数组成员访问指针指向内存的值
	printf("%d, %d, %d, %d, %d, %d, %d, %d, %d\n", a, b, c, p[0], p[1], p[2], *p[0], *p[1], *p[2]);
	
	  //数组指针 
	 int(*p)[3];  //定义了一个数组指针，是一个名字叫p的指针变量，它指向int[3]这种数据类型
	 //数组指针大多数情况下用在指向一个二维数组
	 
	 int buf1[5][3];
	 int buf2[8][3];  //只要二维数组的第一维是int [3]这种类型，那么都可以用int (*p)[3]来指向它 
	  
}

int main(void)
{
	int buf[3][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
	int(*p)[4];
	p = buf;
	
	printf("%p, %p, %p\n", buf, buf[0], buf[0][0]), p, buf[0][0]);
}
