#include <stdio.h>

int main(void)
{
	int i = 0;
	printf("���������鳤�ȣ�"); 
	scanf("%d", &i);
	printf("\n��������鳤�ȣ�i = %d\n", i);
	int *p = calloc(i, sizeof(int));
	
	int a;
	for(a = 0; a < i; a++)
	{
		printf("\n����������Ԫ�أ�"); 
		scanf("%d", &p[a]);
		printf("\n���������Ԫ�أ�p[%d] = %d, ��ֵַ��&p[%d] = %d\n", a, p[a], a, &p[a]);
	}
	
	int max = p[0];
	for (a = 1; a < i; a++)
	{
		if (max < p[a])
		    max = p[a];
	}
	printf("max = %d\n", max);
	
	//��������еڶ����Ԫ�ص�ֵ
	int smax;
	//��һ�������������е�0��Ԫ�غ͵�1��Ԫ�ؾ������͵ڶ��� 
	if(p[0] > p[1])
	{
		max = p[0];
		smax = p[1];
	}
	else 
	{
		max = p[1];
		smax = p[0];
	}
	
	for (a = 2; a < i; a++)
	{
		if (max < p[a])
		{
			smax = max;
			max = p[a];
		}
		else if ((max > p[a]) && (smax < p[a]))
		{
			smax = p[a];
		}
	}
	
	printf("�ڶ���ֵ��smax = %d, ���ֵ��max = %d\n", smax, max);
	return 0; 
}
