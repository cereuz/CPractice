#include <stdio.h>
#include <stdio.h>

int main01(void)
{
	char *p = malloc(10);  //酒店开房，但没做清洁
	memset(p, 0, 10);  //主动清空内存 
	
	int i;
	for(i = 0; i < 10; i++)
	{
		printf("%d\n", p[i]);
	}
	free(p);
	return 0; 
} 


int main02(void)
{
//	char *p = malloc(10);  //酒店开房，但没做清洁
	char *p = calloc(10, sizeof(char)); //开房之后，酒店自动做清洁 
//	memset(p, 0, 10);  //主动清空内存 
	
	int i;
	for(i = 0; i < 10; i++)
	{
		printf("%d\n", p[i]);
	}
	free(p);
	return 0; 
} 

int main03(void)
{
//	char *p = malloc(10);  //酒店开房，但没做清洁
	char *p1 = calloc(10, sizeof(char)); //开房之后，酒店自动做清洁 
	char *p2 = calloc(10, sizeof(char)); //开房之后，酒店自动做清洁 
//	memset(p, 0, 10);  //主动清空内存 
//	char *p2 = realloc(p1, 20);
	
	int i;
	for(i = 0; i < 10; i++)
	{
		printf("%d, %d, %d, %d\n", p1[i], &p1[i], p2[i], &p2[i]);
	}
	free(p1);
	free(p2);
	return 0; 
} 


int main04(void)
{
//	char *p = malloc(10);  //酒店开房，但没做清洁
	char *p1 = calloc(11, sizeof(char)); //开房之后，酒店自动做清洁 
//	char *p2 = calloc(10, sizeof(char)); //开房之后，酒店自动做清洁 
//	memset(p, 0, 10);  //主动清空内存 
	char *p2 = realloc(p1, 20);  //在原有内存基础之上，在堆空间中增加连续的内存
	                  //如果原有内存没有连续空间可扩展，那么会重新分配一个内存空间，将原有内存copy到新空间，然后释放原有内存。 
	//realloc 和  malloc一样， 只分配内存，但不打扫。 
	int i;
	for(i = 0; i < 20; i++)
	{
		printf("%d, %d, %d, %d\n", p1[i], &p1[i], p2[i], &p2[i]);
	}
	free(p1);
	free(p2);
	return 0; 
} 

int main05(void)
{
//	char *p = malloc(10);  //酒店开房，但没做清洁
	char *p3 = calloc(6, sizeof(char)); //开房之后，酒店自动做清洁 
//	char *p2 = calloc(10, sizeof(char)); //开房之后，酒店自动做清洁 
//	memset(p, 0, 10);  //主动清空内存 
	char *p4 = realloc(p3, 3);  //在原有内存基础之上，在堆空间中增加连续的内存
	                  //如果原有内存没有连续空间可扩展，那么会重新分配一个内存空间，将原有内存copy到新空间，然后释放原有内存。 
	//realloc 和  malloc一样， 只分配内存，但不打扫。 
	int i;
	for(i = 0; i < 20; i++)
	{
		printf("%d, %d, %d, %d\n", p3[i], &p3[i], p4[i], &p4[i]);
	}
	free(p3);
	free(p4);
	return 0; 
} 


int main(void)
{
//	char *p = malloc(10);  //酒店开房，但没做清洁
	char *p3 = calloc(6, sizeof(char)); //开房之后，酒店自动做清洁 
//	char *p2 = calloc(10, sizeof(char)); //开房之后，酒店自动做清洁 
//	memset(p, 0, 10);  //主动清空内存 
	char *p4 = realloc(NULL, 9);  //在原有内存基础之上，在堆空间中增加连续的内存
	                  //如果原有内存没有连续空间可扩展，那么会重新分配一个内存空间，将原有内存copy到新空间，然后释放原有内存。 
	//realloc 和  malloc一样， 只分配内存，但不打扫。 
	int i;
	for(i = 0; i < 20; i++)
	{
		printf("%d, %d, %d, %d\n", p3[i], &p3[i], p4[i], &p4[i]);
	}
	free(p3);
	free(p4);
	return 0; 
} 
