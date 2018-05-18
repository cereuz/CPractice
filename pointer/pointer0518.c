#include <stdio.h>

/*
 * 1.ָ����� ��Ϊ�����Ĳ��� 
 *     �����Ĳ���������ָ�����͡�  ���������ǽ�һ�������ĵ�ַ���͸���һ������
 *     ͨ��������ָ�����  ���Լ�ӵ�ʵ���β��޸�ʵ�ε�ֵ�� 
 * 2.һά��������Ϊ��������
 *     ����������Ϊ����������ʱ��C���Խ�����������Ϊָ��
 *     int  func(int array[10]);
 * 3.��ά��������Ϊ��������
 *     ��ά������Ϊ��������ʱ�����Բ�ָ����һ���±ꡣ
 *     int func(int array[][10])      
 */ 

//����������Ϊ�����Ĳ���ʱ����������ʵ����һ��ָ����� 


//void set_array(int *buf)   //����������������׵�ַ  ���� int buf[]  ��ͬ��  int *buf 
void set_array(int buf[])   //�޸����� �� ���ﲻ֪������ĳ��� 
{              
    printf("sizeof(buf) = %d\n", sizeof(buf));
	buf[0] = 100;
	buf[1] = 200;
}

void set_array2(int *buf)    // ʹ��ָ��   �޸����� 
{
	printf("sizeof(buf) = %d\n", sizeof(buf));
	*buf = 100;
	buf++;
	*buf = 200;
}


void print_array01(int buf[])   //��ӡ���� 
{
	int i;
	for(i = 0; i < 10; i++)
	{
		printf("buf[%d] = %d\n", i, buf[i]);
	}
}

void print_array(int *buf, int n)   //ʹ��ָ��   ��ӡ����   �����鳤�� 
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("buf[%d] = %d\n", i, buf[i]);
	}
}

int main02(void)
{
	int buf[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	printf("sizeof(buf) = %d\n", sizeof(buf));
	set_array2(buf);   //����ŵ�������׵�ַ��  ����buf ��   &buf��һ���� 
	print_array01(buf);
	
	return 0;
}


int main(void)
{
	int buf[] = {1, 2, 3, 4, 5, 66, 7, 8, 9, 10, 32, 99, 36, 72};
	printf("sizeof(buf) = %d\n", sizeof(buf));
	set_array2(buf);   //����ŵ�������׵�ַ��  ����buf ��   &buf��һ���� 
	print_array(buf, sizeof(buf) / sizeof(int));  //��������Ӳ������������ĳ���
	
	return 0; 
}
