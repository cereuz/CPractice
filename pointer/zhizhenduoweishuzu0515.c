#include <stdio.h>

int main(void)
{
	int buf[2][3] ={ {1, 2, 3}, {4, 5, 6}};
//	int *p[3];  //ָ������
	int(*p)[3]; //������һ��ָ�룬ָ��int[3] �����������ͣ�ָ���ά�����ָ��
	printf("%d\n", sizeof(p));
	
//	p = buf;  
	
	return 0;
}
