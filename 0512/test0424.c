#include <stdio.h>

int main1()
{
	int a = 0;
	int b = 0;
	
	scanf("%d", &a);//һ��Ҫʹ��&��ȡ�����ĵ�ַ
	scanf("%d", &b); //һ��Ҫʹ��&��ȡ�����ĵ�ַ 
	
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
	
	i = m = n;    //��n���Ƹ�m��Ȼ�����ֵ 
	printf("i = %d\n", i);
	
	i = m == n;   //�ж����������Ƿ���ȡ�
	i = m != n;     //����ַ�����ֵ
	printf("i = %d\n", i); 
}
