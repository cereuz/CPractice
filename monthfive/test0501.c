#include <stdio.h>

int main()
{
	char buf[100] = "��ã�����";
	char buf2[100] = "Hello,World";
	printf("%d\n", buf[0]);  
	printf("%d\n", buf2[0]);  
}


int main02()   //�ַ������� 
{
	char buf[100] = "Hello, World"; 
	printf(buf); //��ӡ�ַ���
	printf("\n");
	printf("%p\n",buf);  //��ӡ�ַ����ĵ�ַ 
	printf("\n");
	int len = 0;
	while(buf[len++]);
		len--;    //�ַ���������0��β��������Ҫ��һλ�� 
		printf("%d\n",len);
		
	//�ַ�������
	int min = 0;
	int max = len - 1;
	while(min < max){
		char temp = buf[min];
		buf[min] = buf[max];
		buf[max] = temp;
		min++;
		max--;
	}
	printf("%s\n",buf);	
		return 0;
}


int main01()      //�������� 
{
	char buf[100] = "���, ����";
	printf(buf); //��ӡ�ַ���
	printf("\n");
	printf("%p\n",buf);  //��ӡ�ַ����ĵ�ַ 
	printf("\n");
	int len = 0;
	while(buf[len++]);
		len--;    //�ַ���������0��β��������Ҫ��һλ�� 
		printf("%d\n",len);
		
	//�ַ�������
	int min = 0;
	int max = len - 1;
	while(min < max){
		char temp = buf[min];
		buf[min] = buf[max-1];
		buf[max-1] = temp;
		
		temp = buf[min + 1];
		buf[min + 1] = buf[max];
		buf[max] = temp;
		
		min +=2;
		max -=2;
	}
	printf("%s\n",buf);	
		return 0;
}
