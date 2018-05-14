#include <stdio.h>

void myitoa(int i, char s[])
{
	int b = i % 10;
	char c = b + '0';
	printf("c = %c\n",c);
	
	i /= 10;
	b = i % 10;
	c = b + '0';
	printf("c = %c\n",c);
	
	i /= 10;
	b = i % 10;
	c = b + '0';
	printf("c = %c\n",c);
}

void myitoa2(int n, char s[])
{
	int i = 0;
	while (n)
	{
		int a = n % 10; // 取出整数的个位
		char c = a + '0'; //将整数转化为字符
		s[i] = c; //将转化后的char依次放入字符串s中
		i++; 
		printf("打印字符 : %c\n" , c);   //打印字符 
		printf("打印字符串 : %s\n" , s);   //打印字符串 
		n /= 10; 
	}
	
	int min = 0;
	int max = i - 1;
	while(min < max)
	{
		char temp = s[min];
		s[min] = s[max];
		s[max] = temp;
		
		min++;
		max--;
	}
	
	printf("打印反转后的字符串 : %s\n" , s);   //打印字符串 
}

int main()
{
	int i = 456789;
	scanf("%d",&i);
	char s[100] = { 0 };
	myitoa2(i,s);
	printf("数字转化为字符串 ：%s\n" , s);   //打印字符串 
	
	return 0;
}
