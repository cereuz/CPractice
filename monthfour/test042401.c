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
	
	//putchar是显示一个字符的函数
	putchar('h');
	putchar('e');
	putchar('l');
	putchar('l');
	putchar('o');
	putchar('\n'); 
	
	
	//scanf函数
	int a;
	int b;
	scanf("%d",&a);//一定要用&取变量的地址
	scanf("%d",&b);//一定要用&取变量的地址
	printf("a + b = %d\n",a+b); 
	
	return 0;
}

int main1()
{
	char a = 0;
	a = getchar(); //得到用户键盘的按键输入 ,只能得到一个char值 
	
	getchar();
	
	char b = 0;   
	b = getchar();//得到用户键盘的按键    只能得到一个char值 
	
	printf("a + b = %d", (a - '0') + (b - '0')); 
//	printf("%c",a);   
}

int main(void)
{
	printf("If at first you don\'t succeed , try , try , try again !");
}

