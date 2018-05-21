#include <stdio.h>

/*
 *  const 关键字保护数组内容 
 *  如果将一个数组作为函数的形参传递，那么数组内容可以在被调用函数内部修改，有时候不希望这样的事情发生。所以要对形参采用 const参数 
 *  func(const int array[])
 *
 *  指针作为函数的返回值 
 */
 
 void mystrcat(char *s1, const char *s2)
 {
 	int len = 0;
 	while(s2[len])   //求出字符串s2的长度   不改变 s2 的值 
 	{
// 		s2++;         //指针指向s2的最后一个字符 
 		len++;
	 }
	 
	 while(*s1)   
	 {
	    s1++;	//指针指向s1的最后一个字符 
	 }
	 
	 int i;
	 for(i = 0; i < len; i++)
	 {
	 	*s1 = *s2;
//	 	*s2 = 'a';   定义了const ，这里是不能修改其值的。 
	 	s1++;
	 	s2++;
	 }
 }
 
 int main(void)
 {
 	 char  s1[10] = "abc";
	 char  s2[10] = "xyz";
	 mystrcat(s1, s2);
	 printf("s1 = %s\n", s1); 
 }
