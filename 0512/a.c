#include <stdio.h>
int main()
{
	int i;
	i = system("b");  //将system函数执行的结果赋值给变量i；
	printf("i = %x\n",i);   //%x代表用16进制来打印整数
	return 0;
}