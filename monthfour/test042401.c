#include <stdio.h>
#define STR "hello"
#define ABC 100

int main0()
{
	printf("hello world!\n");
	printf("%s\n","hello world!\n");
	
	printf("%%\n");
	
	char c = 't';
	printf("%s,%d%c,%s\n",STR,ABC,c,STR);
	
	long l = 100;
	printf("%09ld\n",l);
	
	//putchar����ʾһ���ַ��ĺ���
	putchar('h');
	putchar('e');
	putchar('l');
	putchar('l');
	putchar('o');
	putchar('\n'); 
	
	
	//scanf����
	int a;
	int b;
	scanf("%d",&a);//һ��Ҫ��&ȡ�����ĵ�ַ
	scanf("%d",&b);//һ��Ҫ��&ȡ�����ĵ�ַ
	printf("a + b = %d\n",a+b); 
	
	return 0;
}

int main1()
{
	char a = 0;
	a = getchar(); //�õ��û����̵İ������� ,ֻ�ܵõ�һ��charֵ 
	
	getchar();
	
	char b = 0;   
	b = getchar();//�õ��û����̵İ���    ֻ�ܵõ�һ��charֵ 
	
	printf("a + b = %d", (a - '0') + (b - '0')); 
//	printf("%c",a);   
}

int main(void)
{
	printf("If at first you don\'t succeed , try , try , try again !");
}

