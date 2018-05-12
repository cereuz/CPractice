#include <stdio.h>

int main1()
{
	int a = 0;
	int b = 0;
	
	scanf("%d", &a);//一定要使用&获取变量的地址
	scanf("%d", &b); //一定要使用&获取变量的地址 
	
	printf("a + b = %d--%d--%d\n", a + b, a , b);
}

int main()
{
	int i = 3 < 6;
	printf("i = %d\n",i);
	
	int a = 3 > 6;
	printf("a = %d\n",a);
	
	int m,n;
	m = 30;
	n = 20;     
	int b = m > n;
	printf("b = %d\n",b);
	
	i = m = n;    //将n复制给m，然后输出值 
	printf("i = %d\n", i);
	
	i = m == n;   //判断两个变量是否相等。
	i = m != n;     //输出字符串的值
	printf("i = %d\n", i); 
}
