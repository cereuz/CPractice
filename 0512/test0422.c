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
	printf("%p\n",&a1); //%p����˼����ʾһ���ڴ�ĵ�ַ�� &a1�������a1�ĵ�ַ��� 
	
	char c; //����һ��char���͵ı���
	c = 'a';
	printf("%c\n",c);   // 
	printf("%d\n", sizeof(c)); //char���͵ı����ĳ���
	
	c = '4';
	printf("%d\n",c);  //52����'4'����ַ���ASCII�� 
	
	c = 'a';
	printf("%d\n",c);  //97����'a'����ַ���ASCII�� 
	return 0;
	
	char c1 = '\a';
	c1 = '\b';
	printf("%c\n",c1);
	
	c1 = 'b';
	printf("%c",c1);
	
	c = '\n';
	printf("%c",c);
}
