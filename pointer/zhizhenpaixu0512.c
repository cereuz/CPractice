#include <stdio.h>

void bubble(int *s)
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

void print_buf(int *s)
{
	int i;
	for(i = 0; i < 10; i++)
	{
		printf("%d, ", *(s + i));
	}
	printf("\n");
}

int main(void)
{
	int buf[10] = {12, 99, 65, 33, 26, 38, 28, 29, 22, 33};
	bubble(buf);
	print_buf(buf);
	
	return 0;
}
