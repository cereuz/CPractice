#include <stdio.h>

void myitoa(int i, char s[])
{
	int b = i % 10;
	char c = b + '0';
	printf("c = %c\n",c);
	
	i /= 10;
	b = i % 10;
	c = b + '0';
	printf("c = %c\n",c);
	
	i /= 10;
	b = i % 10;
	c = b + '0';
	printf("c = %c\n",c);
}

void myitoa2(int n, char s[])
{
	int i = 0;
	while (n)
	{
		int a = n % 10; // ȡ�������ĸ�λ
		char c = a + '0'; //������ת��Ϊ�ַ�
		s[i] = c; //��ת�����char���η����ַ���s��
		i++; 
		printf("��ӡ�ַ� : %c\n" , c);   //��ӡ�ַ� 
		printf("��ӡ�ַ��� : %s\n" , s);   //��ӡ�ַ��� 
		n /= 10; 
	}
	
	int min = 0;
	int max = i - 1;
	while(min < max)
	{
		char temp = s[min];
		s[min] = s[max];
		s[max] = temp;
		
		min++;
		max--;
	}
	
	printf("��ӡ��ת����ַ��� : %s\n" , s);   //��ӡ�ַ��� 
}

int main()
{
	int i = 456789;
	scanf("%d",&i);
	char s[100] = { 0 };
	myitoa2(i,s);
	printf("����ת��Ϊ�ַ��� ��%s\n" , s);   //��ӡ�ַ��� 
	
	return 0;
}
