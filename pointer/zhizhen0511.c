#include <stdio.h>

/*
 *   const char *p;  //����һ��ָ������ָ��   ������ͨ��*p�ķ����޸�һ��constָ�룬�� 
 *   char *const p;  //����һ��ָ�볣����һ����ʼ��֮�������ݲ��ɸı䡣��ָ��ı������ɱ䣬����ֵ���Ա仯�� 
 */

int main01(void)
{
	float a = 3.14;
	int i = a; //�Զ���������ת��������������С����������
	
	int *p = &a;  
	printf("%d\n", i);
	printf("%d\n", &i);
	printf("%d\n", &a);
	printf("%d\n", p); 
	printf("%d\n", *p); 
}

int main02(void)      //ָ�볣�� 
{
	int a = 10;
	int b = 60;
 	const int *p;   //p���ָ��ֻ��ָ��һ������ 
	p = &a;
//    *p = 20;      //����ͨ��*p�ķ����޸�һ��constָ��
    a = 30; 
    printf("a = %d\n", a);
    
	p = &b;
	printf("p = %d\n", *p);   // *p�Ǹ�ֻ����ֵ�������޸� 
	return 0;
}

int main(void)   // ����һ������ָ�� 
{
	int a = 10;
	int b = 30;
	int *const p = &a;   // ����һ������ָ�� �� ����ͨ������ָ���޸Ļ��߶�ȡһ��������ֵ 
	*p = 20;
	
//	p = &b;  //����ָ��һ�������ˣ���ô�Ͳ����޸���ָ��ı��� 
	printf("a = %d\n", *p);
	return 0; 
}
