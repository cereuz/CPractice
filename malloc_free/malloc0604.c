#include <stdio.h>

/*
 *  ������  union��һ������ͬһ���洢�ռ�洢��ͬ�������ݵ����� 
 *  ��������ռ���ڴ泤�ȵ��������Ա�ĳ��ȣ�Ҳ�н��������塣 
 *  ��������Ȼ�����ж����Ա����ͬһʱ��ֻ�ܴ������һ�֡� 
 */

union A
{
	int a;
	char b;
	int c;
	short e;
};

int main01(void)
{
	union A a;
	a.a = 10;
	a.b = 20;
	
	printf("%d\n", sizeof(union A));
	printf("%p, %p\n", &a.a, &a.b);
	printf("a = %d\n", a.a);
	return 0;
}

int main(void)
{
	union A a;
	a.a = 0x12345678;
//	a.b = 20;
	
	printf("%d\n", sizeof(union A));
	printf("%p, %p\n", &a.a, &a.b);
	printf("a = %x\n", a.a);
	printf("b = %x\n", a.b);
	return 0;
}
