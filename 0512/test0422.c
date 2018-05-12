#include <stdio.h>

int main()
{
	unsigned short abc = 0xffff;
	abc = abc + 1;
	printf("%d\n",abc);
	
	abc = 2;
	abc =abc -5;
	printf("%d\n",abc);
	
	int i1 = 0x12345678;
	abc = i1;
	printf("%x\n",abc);
	printf("%d\n",abc);
	
	short abc1 = -2;
	i1 = abc1;
	printf("%x\n",i1);
	printf("%d\n",i1);
	
	unsigned short abc2 = 0;
	abc2 = abc2 - 1;
	printf("%x\n",abc2);
	printf("%d\n",abc2);
	
	int a1 = 0x12345678;
	printf("%p\n",&a1); //%p的意思是显示一个内存的地址， &a1代表变量a1的地址编号 
	
	char c; //定义一个char类型的变量
	c = 'a';
	printf("%c\n",c);   // 
	printf("%d\n", sizeof(c)); //char类型的变量的长度
	
	c = '4';
	printf("%d\n",c);  //52就是'4'这个字符的ASCII码 
	
	c = 'a';
	printf("%d\n",c);  //97就是'a'这个字符的ASCII码 
	return 0;
	
	char c1 = '\a';
	c1 = '\b';
	printf("%c\n",c1);
	
	c1 = 'b';
	printf("%c",c1);
	
	c = '\n';
	printf("%c",c);
}
