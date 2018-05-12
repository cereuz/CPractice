#include <stdio.h>

int main()
{
	int i = 5;
	i = 5/2;
	printf("十进制输出：%d\n",i);  //整数是不能保留小数点后面的数的，所以，2.5被截取为2 
	printf("%f\n",i);
	printf("float在内存中的长度：%d\n",sizeof(float));
	printf("%lf\n",i);
	printf("double在内存中的长度：%d\n",sizeof(double));
	
}
