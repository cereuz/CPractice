#include <stdio.h>

/*
 *   结构体定义 ：  struct A { char c;   int  i;   long  l; }      struct A a;   a.c        
 *   结构体内存对齐：1. 以最长的类型为准。  2.偶数位对齐。 
 *
 *
 *
 */
 
//一个字节 = 8位   1BYTE = 8bit   
struct D
{
	char a : 1;  //定义一个成员类型为char，但这个成员只使用 2 个 bit  ；  
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
	    printf("i = %d, d.a = %d, 字节长度：sizeof(d) = %d\n", i, d.a, sizeof(d));	
	    printf("i = %d, d.b = %d, 字节长度：sizeof(d) = %d\n\n", i, d.b, sizeof(d));	
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
	    printf("i = %d, e.a = %d, 字节长度：sizeof(e) = %d\n", i, e.a1, sizeof(e));	
	}

	return 0;
 } 
