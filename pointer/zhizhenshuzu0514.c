#include <stdio.h>

int main01(void)   //ָ������ 
{
	int *a[10]; //����һ��ָ�����飬һ��10����Ա������ÿ����Ա���� int * ����
	printf("%d, %d\n", sizeof(a), sizeof(a[0])); 
	
	short *b[10]; //����һ��ָ�����飬һ��10����Ա������ÿ����Ա���� short * ����
	printf("%d, %d\n", sizeof(b), sizeof(b[0])); 
	
	char *c[10]; //����һ��ָ�����飬һ��10����Ա������ÿ����Ա���� char * ����
	printf("%d, %d\n", sizeof(c), sizeof(c[0])); 
	
	int a1;
	short a2;
	
	a[0] = &a1;
	b[0] = &a2; 
}


/*
 * ͨ�� **pp����a    ͨ��*pp����p  ------- ����ָ�� 
 *  ͨ��*p ���� a   ------- һ��ָ�� 
 */ 
int main()     //����ָ��
{
	int a = 10;
	int *p = &a;
	int **pp = &p;  //����һ������ָ�룬ָ����һ��һ��ָ��ĵ�ַ
	**pp = 100;   //ͨ������ָ���޸��ڴ��ֵ
	
	printf("p�ĵ�ַ�ǣ�%d\n",*pp);    //���� �Ƿ�����p�ĵ�ַ 
	 
	printf("a = %d\n", a);
	
	int ***ppp = &pp;  //����һ������ָ�룬ָ��һ������ָ��ĵ�ַ
	***ppp = 22; 
	printf("a = %d\n", a);
	
	a =  ppp;   //��ͬ��  a = &pp; 
	printf("%d, %d, %d, %d\n", ***ppp, &p, &pp, &ppp); 
	return 0; 
 } 
