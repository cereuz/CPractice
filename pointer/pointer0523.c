#include <stdio.h>

//打印数组                 
void print_array(int *p, int n)   //打印数组 。如果参数是一个int数组，那么就必须传递第二个参数用来标示数组的长度 
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("p[%d] = %d, ", i, p[i]);
	}
	printf("\n");
}

//打印字符串 一                 
void print_str_a(char *s, int n)   //打印字符串，如果带一个字符串的长度参数，做不同处理，打印结果不一样 
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("第 %d 个字符的值为： %c\n", i, s[i]);
	}
}

 //打印字符串  二                       //因为字符串是明确的以 '\0'  结尾的 ,所以，在函数内部是有条件来作为循环终止依据的 
void print_str(char *s)  //打印字符串   如果参数是个字符串，那么就不需要包含第二个参数了 
{
	int i = 0;
	while(s[i])
	{
		printf("%c", s[i++]);
	}
	printf("\n");
}

void swap(int *a, int *b)  //自己实现一个swap，除了函数的参数以外，不能定义任何变量
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
 } 

int main01(void)
{
   int a = 20;
   int b = 10;
   swap(&a, &b);
   printf("a = %d, b = %d\n", a , b);
 } 
 
 int main02(void)
 {
 	char buf[100] = "hello world";
 	char *p = buf;

 //	*(p + 5) = 'a'; //没有修改指针 

 //   p[5] = 'b'; //没有修改指针 

    p += 5; //这里修改了指针p的值 
    *p = 'c';

    p[3] = ' ';
 	printf("buf = %s\n", buf);
 }
 
 int main(void)
 {
 	int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 	print_array(array, 10);
 	
 	char s[20] = "Hello World!";
 	print_str(s);
 	
 	s[3] = 0;
	print_str(s);
	printf("s = %s\n", s);
	print_str_a(s, strlen(s));  //只能取前边几个 
	print_str_a(s, sizeof(s));  //能全部取到 
 	return 0;
 }
