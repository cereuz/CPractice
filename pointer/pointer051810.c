#include <stdio.h>

void print_array(int *s, int n)  //��ӡ����ĺ��� 
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("%d, ", s[i]);
	}
	printf("\n");
}


int main(void)
{
	// void *p(int, char *);  //������һ�����������������ֽ�p�������ķ���ֵ�� void *  ,�����Ĳ���������int ��  char* 
	// void (*p)(int, char *);  //������һ��ָ������ָ�룬ָ�����Ϊint��char* , ����ֵΪvoid�ĺ���ָ�� 
	// int *(*p)(int *);      //����һ������Ϊint*  ����ֵΪint * ��ָ������ָ�� 
	
	int (*p)(int, int);  //������һ��ָ������ָ�룬ָ��ָ����������������int����ֵҲ��int 
	
	p = print_array;  //���Ͳ�ͬ�ĸ�ֵ�����������C++���Ǳ���ͨ�����ġ�
	 
	int buf[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	p(buf, 10);
	return 0;
}
