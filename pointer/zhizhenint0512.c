#include <stdio.h>

/*
 * ָ�����㲻�Ǽ򵥵������Ӽ���������ָ��ָ��������������ڴ���ռ���ֽ�����Ϊ����������
 *  char ��һ���ֽڣ�int ���ĸ��ֽ�  
 */

int main(void)
{
	int buf[10];
	int *p = buf;
	int *p1 = &buf[1];
	printf("%d, %d\n", p, p1);

	p++;
	printf("%d, %d\n", p, p1);
	return 0; 
}
