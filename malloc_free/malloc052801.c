#include <stdio.h>

int *geta()   // ���󣬲��ܽ�һ�� ջ�����ĵ�ַͨ�������ķ���ֵ���ء� 
{
	int a = 0;
	return &a;
}

int *geta1()  //����ͨ�������ķ���ֵ����һ���ѵ�ַ�����ǵã�һ��Ҫfree 
{
	int *p = malloc(sizeof(int));  //ͨ�� malloc ������һ���ѿռ�
	return p; 
}

int *geta2()
{
	static int a = 0;   // ��̬ ����  �ڴ�ռ䡣 һֱ��Ч 
	return &a;
 } 

int main(void)
{
	int *getp = geta2();
	*getp = 100;
	printf("%d, %d\n", *getp, getp); 
	free(getp);  //�ͷ�ͨ��malloc������ڴ� 
}
