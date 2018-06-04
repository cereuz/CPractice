#include <stdio.h>

struct A
{
	int a;
	char b;
};

struct B
{
	struct A;
	char c;
};

struct str
{
	char s[100];
};

int main(void)
{
	printf("%d\n", sizeof(struct B));
	
	struct str s1, s2;
	strcpy(s1.s, "Hello");
	//s2 = s1；//结构体赋值，其实就是结构体之间内存的拷贝。
	
	memcpy(&s2, &s1, sizeof(s1));
	printf("s1.s = %s, s2.s = %s\n", s1.s, s2.s); 
	
	struct A a;
	struct A *p = &a;
//	(*p).a = 10;
//	(*p).b = 20;
	p->a = 30;
	p->b = 40;

    struct A array[10] = { 0 };
    p = array;
    p->a = 1;
	p->b = 2;
    p++;
	p->a = 3;
	p->b = 4;
	
	int i;
	for(i = 0; i < 10; i++)
	{
		printf("a = %d, b = %d\n", array[i].a, array[i].b);
	}

	return 0;
}
