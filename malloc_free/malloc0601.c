#include <stdio.h>

/*
 *   �ṹ�嶨�� ��  struct A { char c;   int  i;   long  l; }      struct A a;   a.c        
 *   �ṹ���ڴ���룺1. ���������Ϊ׼��  2.ż��λ���롣 
 *
 *
 *
 */
 
//һ���ֽ� = 8λ   1BYTE = 8bit   
struct D
{
	char a : 1;  //����һ����Ա����Ϊchar���������Աֻʹ�� 2 �� bit  ��  
	unsigned char b : 4;
	char c : 4; 
	
};  

struct E
{
   	char a1 : 1;
	char a2 : 1;
	char a3 : 1;
	char a4 : 1;
	char a5 : 1;
	char a6 : 1;
	char a7 : 1;
	char a8 : 1;
	char a9 : 1;
}; 

int main01(void)
{
	struct D d;
	
	int i;
	for(i= 0; i < 20; i++)
	{
		d.a = i;
		d.b = i;
	    printf("i = %d, d.a = %d, �ֽڳ��ȣ�sizeof(d) = %d\n", i, d.a, sizeof(d));	
	    printf("i = %d, d.b = %d, �ֽڳ��ȣ�sizeof(d) = %d\n\n", i, d.b, sizeof(d));	
	}

	return 0;
 } 
 
 int main(void)
{
	struct E e;
	
	int i;
	for(i= 0; i < 20; i++)
	{
		e.a1 = i;
	    printf("i = %d, e.a = %d, �ֽڳ��ȣ�sizeof(e) = %d\n", i, e.a1, sizeof(e));	
	}

	return 0;
 } 
