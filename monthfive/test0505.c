#include <stdio.h>

void test(int n)     //输出 5 4 3 2 1 0  
{
	n--;   
	printf("先序递归：%d\n",n);  // 先序递归，如果是先序递归，那么代码是顺序执行   
	if(n > 0)
	   test(n);    // 函数自己调用自己，就叫函数的递归 
	   printf("后续递归：%d\n",n);  // 后序递归，如果是后续递归，那么代码是逆序执行。 
}

void test1(int n)    //输出 0 1 2 3 4 5 
{
	if(n > 0)
	  {
	   n--;
	   test1(n);
	   printf("后续递归：%d\n",n);  // 后序递归，如果是后续递归，那么代码是逆序执行。 
	  } 

}


void test2(int n)    //输出 6 5 4 3 2 1 
{
	if(n > 0)
	{
	   printf("%d\n",n);
	   n--;
	   test2(n);
	}

}


void test3(int n)    //输出 0 1 2 3 4 5 
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
