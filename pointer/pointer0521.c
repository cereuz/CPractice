#include <stdio.h>

/*
 * memset ,  memcpy ,  memmove  ���� 
 *    �����������ֱ�ʵ���ڴ����ã��ڴ濽�� ��  �ڴ��ƶ� 
 *    ʹ�� memcpy ��ʱ��һ��Ҫȷ���ڴ�û���ص����� 
 */ 
 
 //��ӡ����
 void print_array(int buf[])
 {
 	int i = 0;
 	for(i = 0; i < 10; i++)
 	{
 		printf("buf[%d] = %d\n", i, buf[i]);
	 }
  } 
 
 int main(void)
 {
 	int buf[10] = { 0 };
 	buf[0] = 8;
 	buf[1] = 9;
 	buf[4] = 8;
 	
 	//�뽫���buf��һ�γ�ʼ��
                               // 	buf[10] = { 0 };   //������﷨�����ֻ���ڶ��������ʱ���ҵ�һ�γ�ʼ����ʱ��ʹ�á� 
	 int i;
	 for(i = 0; i < 10; i++)
	 {
	 	buf[i] = 0;
	  } 
 	
 	memset(buf, 0, sizeof(buf)); //��һ��������Ҫ���õ��ڴ��ַ���ڶ���������Ҫ���õĳ�ʼ����ֵ���������������ڴ��С����λ�ֽ� 
 	
 	print_array(buf);
 	return 0;
 }
