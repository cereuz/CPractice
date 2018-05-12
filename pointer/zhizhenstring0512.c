#include <stdio.h>

int main(void)
{
	char s1[100] = "hello";
	char s2[100] = "world";
	
	//用指针来求一个字符串的长度，不可以使用数组下标的方式
	//用指针来将s1 和 s2 合并为一个字符串，结果放入s1中，不可以使用数组下标的方式
	
	char *p1 = s1;
	int len = 0;
	while (*p1)
	{
		p1++;
		len++;
	 } 
	 printf("s1的长度len是：%d\n", len);
	 
	 char *p2 = s2;
	 while (*p2)
	 {
	 /*	
	 	*p1 = *p2;   //从s1的最后开始，从s2的首元素开始 
	 	p2++;
	 	p1++;
	  */
	 	
	 	*p1++ = *p2++;
	 }
	 printf("s1 = %s\n", s1);
}
