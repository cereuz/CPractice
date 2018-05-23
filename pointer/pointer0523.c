#include <stdio.h>

//��ӡ����                 
void print_array(int *p, int n)   //��ӡ���� �����������һ��int���飬��ô�ͱ��봫�ݵڶ�������������ʾ����ĳ��� 
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("p[%d] = %d, ", i, p[i]);
	}
	printf("\n");
}

//��ӡ�ַ��� һ                 
void print_str_a(char *s, int n)   //��ӡ�ַ����������һ���ַ����ĳ��Ȳ���������ͬ������ӡ�����һ�� 
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("�� %d ���ַ���ֵΪ�� %c\n", i, s[i]);
	}
}

 //��ӡ�ַ���  ��                       //��Ϊ�ַ�������ȷ���� '\0'  ��β�� ,���ԣ��ں����ڲ�������������Ϊѭ����ֹ���ݵ� 
void print_str(char *s)  //��ӡ�ַ���   ��������Ǹ��ַ�������ô�Ͳ���Ҫ�����ڶ��������� 
{
	int i = 0;
	while(s[i])
	{
		printf("%c", s[i++]);
	}
	printf("\n");
}

void swap(int *a, int *b)  //�Լ�ʵ��һ��swap�����˺����Ĳ������⣬���ܶ����κα���
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

 //	*(p + 5) = 'a'; //û���޸�ָ�� 

 //   p[5] = 'b'; //û���޸�ָ�� 

    p += 5; //�����޸���ָ��p��ֵ 
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
	print_str_a(s, strlen(s));  //ֻ��ȡǰ�߼��� 
	print_str_a(s, sizeof(s));  //��ȫ��ȡ�� 
 	return 0;
 }
