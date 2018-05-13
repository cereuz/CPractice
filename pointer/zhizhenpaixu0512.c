#include <stdio.h>

void bubble(int *s)   //ʹ��ָ��  ð������ 
{
	int i;
	int j;
	for(i = 0; i < 10; i++)
	{
		for (j = 1; j < 10 - i; j++)
		{
			if(*(s + j) < *(s + j -1))
			{
				int temp = *(s + j);
				*(s + j) = *(s + j -1);
				*(s + j -1) = temp;
			}
		}
	}
}

void print_buf(int *s)   //��ӡ���� 
{
	int i;
	for(i = 0; i < 10; i++)
	{
		printf("%d, ", *(s + i));
	}
	printf("\n");
}


int max(int s[])   //���������ֵ 
{
	int value = s[0];
	int i;
	for(i = 1; i < 10; i++)
	{
		if(value < s[i])
		{
			value = s[i];
		}
	}
	return value;
}

int pmax(int s[])  //ָ�������ֵ 
{
	int value = *s;
	int i;
	for(i = 1; i < 10; i++)
	{
		if(value < *(s + i))
		{
			value = *(s + i);
		}
	}
	return value;
}

void reverse(int s[])   // �������� 
{
	int low = 0;
	int high = 9;
	while (low < high)
	{
		int temp = s[low];
		s[low] = s[high];
		s[high] = temp;
		low++;
		high--;
	}
 } 
 
 void preverse(int s[])   // ʹ��ָ�� �������� 
{
	int *low = &s[0];
	int *high = &s[9];
	while (low < high)
	{
		int temp = *low;
		*low = *high;
		*high = temp;
		low++;
		high--;
	}
 } 

int main(void)
{
	int buf[10] = {12, 99, 65, 36, 86, 78, 28, 29, 22, 33};
	print_buf(buf);  //��ͨ��ӡ 
	
	reverse(buf);  //��һ���������� 
	print_buf(buf);
	
	reverse(buf);   //�ڶ����������� 
	print_buf(buf);
	
	preverse(buf);   //ʹ��ָ��  �������� 
	print_buf(buf);
	
	bubble(buf);   //ʹ��ָ��  ð������ 
	print_buf(buf);
	
	int mymax = max(buf);
	printf("���ֵmaxΪ��%d\n", mymax);

	
	int pmymax = pmax(buf);
	printf("���ֵpmaxΪ��%d\n", pmymax);
		 
	return 0;
}
