#include <stdio.h>

int main(void)
{
	int buf[2][3] ={ {1, 2, 3}, {4, 5, 6}};
//	int *p[3];  //指针数组
	int(*p)[3]; //定义了一个指针，指向int[3] 这种数据类型，指向二维数组的指针
	printf("%d\n", sizeof(p));
	
//	p = buf;  
	
	return 0;
}
