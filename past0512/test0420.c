# include <stdio.h>

int main()
{
	int i = 7;
	printf("ʮ���ƣ�%d\n",i);
	printf("ʮ�����޷��ţ�%u\n",i);
	printf("ʮ�����ֽ�����%d\n",sizeof(i));
	printf("ʮ�����ƣ�%x\n",i);
	printf("�˽��ƣ�%o\n",i);
	
    int m = -7;
	printf("ʮ���ƣ�%d\n",m);
	printf("ʮ�����޷��ţ�%u\n",m);
	printf("ʮ�����ֽ�����%d\n",sizeof(m));
	printf("ʮ�����ƣ�%x\n",m);
	printf("�˽��ƣ�%o\n",m);
	
	long long n = -7;
	printf("ʮ���ƣ�%d\n",n);
	printf("ʮ�����޷��ţ�%u\n",n);
	printf("ʮ�����ֽ�����%d\n",sizeof(n));
	printf("ʮ�����ƣ�%x\n",n);
	printf("�˽��ƣ�%o\n",n);
} 
