#include <stdio.h>

void bubble(int *s)   //使用指针  冒泡排序 
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

void print_buf(int *s)   //打印数组 
{
	int i;
	for(i = 0; i < 10; i++)
	{
		printf("%d, ", *(s + i));
	}
	printf("\n");
}


int max(int s[])   //数组求最大值 
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

int pmax(int s[])  //指针求最大值 
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

void reverse(int s[])   // 数组逆序 
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
 
 void preverse(int s[])   // 使用指针 数组逆序 
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
	print_buf(buf);  //普通打印 
	
	reverse(buf);  //第一次数组逆序 
	print_buf(buf);
	
	reverse(buf);   //第二次数组逆序 
	print_buf(buf);
	
	preverse(buf);   //使用指针  数组逆序 
	print_buf(buf);
	
	bubble(buf);   //使用指针  冒泡排序 
	print_buf(buf);
	
	int mymax = max(buf);
	printf("最大值max为：%d\n", mymax);

	
	int pmymax = pmax(buf);
	printf("最大值pmax为：%d\n", pmymax);
		 
	return 0;
}
