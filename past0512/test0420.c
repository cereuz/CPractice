# include <stdio.h>

int main()
{
	int i = 7;
	printf("十进制：%d\n",i);
	printf("十进制无符号：%u\n",i);
	printf("十进制字节数：%d\n",sizeof(i));
	printf("十六进制：%x\n",i);
	printf("八进制：%o\n",i);
	
    int m = -7;
	printf("十进制：%d\n",m);
	printf("十进制无符号：%u\n",m);
	printf("十进制字节数：%d\n",sizeof(m));
	printf("十六进制：%x\n",m);
	printf("八进制：%o\n",m);
	
	long long n = -7;
	printf("十进制：%d\n",n);
	printf("十进制无符号：%u\n",n);
	printf("十进制字节数：%d\n",sizeof(n));
	printf("十六进制：%x\n",n);
	printf("八进制：%o\n",n);
} 
