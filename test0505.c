#include <stdio.h>

void test(int n)     //��� 5 4 3 2 1 0  
{
	n--;   
	printf("����ݹ飺%d\n",n);  // ����ݹ飬���������ݹ飬��ô������˳��ִ��   
	if(n > 0)
	   test(n);    // �����Լ������Լ����ͽк����ĵݹ� 
	   printf("�����ݹ飺%d\n",n);  // ����ݹ飬����Ǻ����ݹ飬��ô����������ִ�С� 
}

void test1(int n)    //��� 0 1 2 3 4 5 
{
	if(n > 0)
	  {
	   n--;
	   test1(n);
	   printf("�����ݹ飺%d\n",n);  // ����ݹ飬����Ǻ����ݹ飬��ô����������ִ�С� 
	  } 

}


void test2(int n)    //��� 6 5 4 3 2 1 
{
	if(n > 0)
	{
	   printf("%d\n",n);
	   n--;
	   test2(n);
	}

}


void test3(int n)    //��� 0 1 2 3 4 5 
{
	if(n > 0)
	{
	n--;
    test3(n);
    printf("%d\n",n);
	 } 

}

int main(void)
{
	int i = 6;
	test3(i);
	return 0;
} 
