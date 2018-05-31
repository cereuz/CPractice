#include <stdio.h>
#include <stdio.h>

int main01(void)
{
	char *p = malloc(10);  //�Ƶ꿪������û�����
	memset(p, 0, 10);  //��������ڴ� 
	
	int i;
	for(i = 0; i < 10; i++)
	{
		printf("%d\n", p[i]);
	}
	free(p);
	return 0; 
} 


int main02(void)
{
//	char *p = malloc(10);  //�Ƶ꿪������û�����
	char *p = calloc(10, sizeof(char)); //����֮�󣬾Ƶ��Զ������ 
//	memset(p, 0, 10);  //��������ڴ� 
	
	int i;
	for(i = 0; i < 10; i++)
	{
		printf("%d\n", p[i]);
	}
	free(p);
	return 0; 
} 

int main03(void)
{
//	char *p = malloc(10);  //�Ƶ꿪������û�����
	char *p1 = calloc(10, sizeof(char)); //����֮�󣬾Ƶ��Զ������ 
	char *p2 = calloc(10, sizeof(char)); //����֮�󣬾Ƶ��Զ������ 
//	memset(p, 0, 10);  //��������ڴ� 
//	char *p2 = realloc(p1, 20);
	
	int i;
	for(i = 0; i < 10; i++)
	{
		printf("%d, %d, %d, %d\n", p1[i], &p1[i], p2[i], &p2[i]);
	}
	free(p1);
	free(p2);
	return 0; 
} 


int main04(void)
{
//	char *p = malloc(10);  //�Ƶ꿪������û�����
	char *p1 = calloc(11, sizeof(char)); //����֮�󣬾Ƶ��Զ������ 
//	char *p2 = calloc(10, sizeof(char)); //����֮�󣬾Ƶ��Զ������ 
//	memset(p, 0, 10);  //��������ڴ� 
	char *p2 = realloc(p1, 20);  //��ԭ���ڴ����֮�ϣ��ڶѿռ��������������ڴ�
	                  //���ԭ���ڴ�û�������ռ����չ����ô�����·���һ���ڴ�ռ䣬��ԭ���ڴ�copy���¿ռ䣬Ȼ���ͷ�ԭ���ڴ档 
	//realloc ��  mallocһ���� ֻ�����ڴ棬������ɨ�� 
	int i;
	for(i = 0; i < 20; i++)
	{
		printf("%d, %d, %d, %d\n", p1[i], &p1[i], p2[i], &p2[i]);
	}
	free(p1);
	free(p2);
	return 0; 
} 

int main05(void)
{
//	char *p = malloc(10);  //�Ƶ꿪������û�����
	char *p3 = calloc(6, sizeof(char)); //����֮�󣬾Ƶ��Զ������ 
//	char *p2 = calloc(10, sizeof(char)); //����֮�󣬾Ƶ��Զ������ 
//	memset(p, 0, 10);  //��������ڴ� 
	char *p4 = realloc(p3, 3);  //��ԭ���ڴ����֮�ϣ��ڶѿռ��������������ڴ�
	                  //���ԭ���ڴ�û�������ռ����չ����ô�����·���һ���ڴ�ռ䣬��ԭ���ڴ�copy���¿ռ䣬Ȼ���ͷ�ԭ���ڴ档 
	//realloc ��  mallocһ���� ֻ�����ڴ棬������ɨ�� 
	int i;
	for(i = 0; i < 20; i++)
	{
		printf("%d, %d, %d, %d\n", p3[i], &p3[i], p4[i], &p4[i]);
	}
	free(p3);
	free(p4);
	return 0; 
} 


int main(void)
{
//	char *p = malloc(10);  //�Ƶ꿪������û�����
	char *p3 = calloc(6, sizeof(char)); //����֮�󣬾Ƶ��Զ������ 
//	char *p2 = calloc(10, sizeof(char)); //����֮�󣬾Ƶ��Զ������ 
//	memset(p, 0, 10);  //��������ڴ� 
	char *p4 = realloc(NULL, 9);  //��ԭ���ڴ����֮�ϣ��ڶѿռ��������������ڴ�
	                  //���ԭ���ڴ�û�������ռ����չ����ô�����·���һ���ڴ�ռ䣬��ԭ���ڴ�copy���¿ռ䣬Ȼ���ͷ�ԭ���ڴ档 
	//realloc ��  mallocһ���� ֻ�����ڴ棬������ɨ�� 
	int i;
	for(i = 0; i < 20; i++)
	{
		printf("%d, %d, %d, %d\n", p3[i], &p3[i], p4[i], &p4[i]);
	}
	free(p3);
	free(p4);
	return 0; 
} 
