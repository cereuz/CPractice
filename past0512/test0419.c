#include <stdio.h>

#define MAX 10 //����һ���곣����  ֵΪ10��
#define STRING "hello world\n"   //����һ���ַ������� 

int main() 
{
	int i;  //����һ������������Ϊi��ֵ�ɱ� 
	i = 100;
	i = 5; 
//	MAX = 200;   //������ֵ�����޸� 

    const int a = 20;//������һ��const������ֵΪ20
//	a = 0 ; //������ֵ�����޸� 
    const char *str = "hello world2\n";
    
	printf("%d\n",10);
	printf("%d\n",i);
	printf("%d\n",MAX);
	return 0;
}
