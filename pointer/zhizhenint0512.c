#include <stdio.h>

/*
 * 指针运算不是简单的整数加减法，而是指针指向的数据类型在内存中占用字节数作为倍数的运算
 *  char 是一个字节，int 是四个字节  
 */

int main(void)
{
	int buf[10];
	int *p = buf;
	int *p1 = &buf[1];
	printf("%d, %d\n", p, p1);

	p++;
	printf("%d, %d\n", p, p1);
	return 0; 
}
