#include <stdio.h>   
                    //ϵͳ�����ͷ�ļ���ʹ�ü��������� <> 
#include "a.h"     //�Զ����ͷ�ļ� ��ʹ�� ˫��������  "" 
#include "abc/b0504.h"   //���õ�ǰ�ļ�����   ���ļ��� ��ͷ�ļ� 


int main()
{
	int c = max(20, 36);
	printf("c = %d\n", c);
	c = add(50, 23);
	printf("c = %d\n", c);
	c = MAX;
	printf("c = %d\n", c);
	return 0;
}
