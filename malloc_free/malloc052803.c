#include <stdio.h>

/*
 *    �ѣ�ջ���ڴ�ӳ�� 
 *         ÿ���̶߳����Լ�ר����ջ��stack�� �� �Ƚ���� ��LIFO)
 *         ջ�����ߴ�̶�������������ջ���     
 *         �����뿪���÷�Χ��ջ�ϵ����ݻ��Զ��ͷ�  
 *         �����ڴ�����ֹ��ͷţ�C/C++), ��������ִ�л���֧��GC
 *        ջ���Ƕѣ�1.��ȷ֪������ռ�ö����ڴ棬 1.1. ���ݺ�С
 *                  2. �����ڴ棬  2.1   ��ȷ����Ҫ�����ڴ�      
 ��       
 ��    Code Area �� �������ָ������ַ�����ֻ�ɶ� 
 ��    Static Area �����ȫ�ֱ���/��������̬����/���� 
 ��    Heap �� �ɳ���Ա���ƣ�ʹ�� malloc / free ������ 
 ��    Stack �� Ԥ���趨��С���Զ��������ͷš� 
 ��    
 *     Data Area      Dynamic Area
 *
 *     C���Եĺ����������Ǵ��������˳����ջ�� 
 */
 
void print_array(int buf[])   //��ӡ���� 
{
	int i;
	for(i = 0; i < 10; i++)
	{
		printf("buf[%d] = %d\n", i, buf[i]);
	}
}

int main(void)
{
	int i = 0;
	scanf("%d", &i);
	int *array = NULL;
	array =  malloc(sizeof(int) * i);
	print_array(array);
	printf("%d\n", sizeof(array));
	print_array(array);
	return 0;
}
