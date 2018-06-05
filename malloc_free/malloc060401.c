#include <stdio.h>

/*
 *  1. 枚举是常量，值是不能修改的。  默认从 0 开始，依次递增 
 *
 *
 */

enum A
{
	red = 4, black = 3, yellow, green
};


int main(void)
{
	printf("%d, %d, %d, %d\n", red, black, yellow, green);
}
