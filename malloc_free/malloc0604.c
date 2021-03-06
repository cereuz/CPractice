#include <stdio.h>

/*
 *  联合体  union是一个能在同一个存储空间存储不同类型数据的类型 
 *  联合体所占的内存长度等于其最长成员的长度，也有叫做共用体。 
 *  联合体虽然可以有多个成员，但同一时间只能存放其中一种。 
 */

union A
{
	int a;
	char *b;
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

int main02(void)
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

int main(void)
{
	union A a;
	a.b = malloc(100); //b指向了一个堆的地址 
	free(a.b);
	//如果联合体中有指针成员，那么一定要使用完这个指针 ，并且free指针之后，才能使用其他成员。 
	a.a = 10;     //b的值也成了10了 
//	a.b = 20;
	
	printf("%d\n", sizeof(union A));
	printf("%p, %p\n", &a.a, &a.b);
	printf("a.a = %d, a.b = %d\n", a.a, a.b);
//	free(a.b); 
	return 0;
}
