#include <stdio.h>

//void print_buf(int p[][3], int a, int b)  //����ά������Ϊ�����������ݵ�ʱ�򣬶����ָ������ 
void print_buf(int (*p)[3], int a, int b)  //����ά������Ϊ�����������ݵ�ʱ�򣬶����ָ������ 
{
	int i;
	int j;
	for(i = 0; i < a; i++)
	{
		for(j = 0; j< b; j++)
		{
			printf("p[%d][%d] = %d\n", i, j, p[i][j]);
		}
	}
}

int main(void)
{
   int buf[3][3] = { {1,2,3},{4,5,6},{8,99}};
   printf("sizeof(buf) = %d\n", sizeof(buf));
   printf("sizeof(int) = %d\n", sizeof(int));
   printf("sizeof(buf[0]) = %d\n", sizeof(buf[0]));
   
//   print_buf(buf,3,3);
   print_buf(buf, sizeof(buf)/sizeof(buf[0]), sizeof(buf[0])/sizeof(int));
   return 0;	
} 
