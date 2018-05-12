#include <stdio.h>

int main01(void)     //统计汉字和字符的个数 
{
	char buf[100] = "你好HelloWorld世界中心";
	int len = 0;
	int i = 0;
	while (buf[i])
	{
		if (buf[i] < 0)    //汉字开始的是负数，走两步。   普通字符走一步。 
		    i++;
		    i++;
		    len++;
	}
	printf("%d\n",len);
	return 0;
}

int main02(void)
{
	 char s[100] = "Hello World     ";
	 printf("(%s)\n",s);
	 return 0;
}

int main(void)
{
	time_t tm = time(NULL);  //得到系统时间
	printf("%u\n", tm);   //打印时间戳 
	srand(tm);  //随机数种子发生器 
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		int value = rand();   //随机数产生器 
		printf("%d\n", value);
	}
	
	printf("A\n");
	return 0;
}
