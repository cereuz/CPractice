#include <stdio.h>

int main01(void)     //ͳ�ƺ��ֺ��ַ��ĸ��� 
{
	char buf[100] = "���HelloWorld��������";
	int len = 0;
	int i = 0;
	while (buf[i])
	{
		if (buf[i] < 0)    //���ֿ�ʼ���Ǹ�������������   ��ͨ�ַ���һ���� 
		    i++;
		    i++;
		    len++;
	}
	printf("%d\n",len);
	return 0;
}

int main02(void)
{
	 char s[100] = "Hello World     ";
	 printf("(%s)\n",s);
	 return 0;
}

int main(void)
{
	time_t tm = time(NULL);  //�õ�ϵͳʱ��
	printf("%u\n", tm);   //��ӡʱ��� 
	srand(tm);  //��������ӷ����� 
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		int value = rand();   //����������� 
		printf("%d\n", value);
	}
	
	printf("A\n");
	return 0;
}
