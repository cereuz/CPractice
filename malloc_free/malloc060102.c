#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct A
{
	int a;
	char b;
};


int main(void)
{
	struct A a;
	struct A *p = &a;
//    struct A array[10] = { 0 };
//    p = array;
    p = malloc(sizeof(struct A) * 10);
    struct A *array = p;
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

    free(array);
    
	return 0;
}

