#include <stdio.h>

int main(void)
{
	int i = 0;
	printf("请输入数组长度："); 
	scanf("%d", &i);
	printf("\n输入的数组长度：i = %d\n", i);
	int *p = calloc(i, sizeof(int));
	
	int a;
	for(a = 0; a < i; a++)
	{
		printf("\n请输入数组元素："); 
		scanf("%d", &p[a]);
		printf("\n输入的数组元素：p[%d] = %d, 地址值：&p[%d] = %d\n", a, p[a], a, &p[a]);
	}
	
	int max = p[0];
	for (a = 1; a < i; a++)
	{
		if (max < p[a])
		    max = p[a];
	}
	printf("max = %d\n", max);
	
	//输出数组中第二大的元素的值
	int smax;
	//第一步，假设数组中第0个元素和第1个元素就是最大和第二大 
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
	
	printf("第二大值：smax = %d, 最大值：max = %d\n", smax, max);
	return 0; 
}
