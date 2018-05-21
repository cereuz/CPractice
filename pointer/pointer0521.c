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
 		printf("buf[%d] = %d, ", i, buf[i]);
	 }
	 printf("\n");
  } 
 
 int main01(void)
 {
 	int buf[1024] = { 0 };
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
 
 
 int main(void)
 {
 	int buf1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 	int buf2[10];
 	memcpy(buf2, buf1, sizeof(buf1));  //��buf1������ȫ��������buf2�� ������СΪ�������������ֽ�
	print_array(buf2);
	
	memmove(buf2, buf1, sizeof(buf1));  //memmove ������û�иı�ԭʼ�ڴ��ֵ 
	print_array(buf2);  
	print_array(buf1);
 }
