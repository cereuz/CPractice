#include <stdio.h>

/*
 *  const �ؼ��ֱ����������� 
 *  �����һ��������Ϊ�������βδ��ݣ���ô�������ݿ����ڱ����ú����ڲ��޸ģ���ʱ��ϣ�����������鷢��������Ҫ���ββ��� const���� 
 *  func(const int array[])
 *
 *  ָ����Ϊ�����ķ���ֵ 
 */
 
 void mystrcat(char *s1, const char *s2)
 {
 	int len = 0;
 	while(s2[len])   //����ַ���s2�ĳ���   ���ı� s2 ��ֵ 
 	{
// 		s2++;         //ָ��ָ��s2�����һ���ַ� 
 		len++;
	 }
	 
	 while(*s1)   
	 {
	    s1++;	//ָ��ָ��s1�����һ���ַ� 
	 }
	 
	 int i;
	 for(i = 0; i < len; i++)
	 {
	 	*s1 = *s2;
//	 	*s2 = 'a';   ������const �������ǲ����޸���ֵ�ġ� 
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
