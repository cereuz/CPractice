#include <stdio.h>

/*
 *   int buf[3][5]  //二维数组名称，buf代表数组首地址 
 *   int(*a)[5]       定义一个指向int[5]类型的指针变量 a
 *   a(0),  *(a + 0), *a    0行，0列元素地址 
 *   a + 1             第一行首地址
 *   a[1],  *(a + 1)   第一行，0列元素地址
 *   a[1] + 2, *(a+1) + 2, &a[1][2]   第一行，2列元素地址
 *   *(a[1] + 2),  *(*(a + 1) + 2)  第一行，2列元素的值 
 */

/*
 *  int buf[3][5] = { {2, 4, 3, 5, 3}, {7, 2, 6, 8, 1}, {7, 3, 9, 0, 2} }
 *  //不允许使用数组下标，只能通过指向二维数组的指针求出数组中每行和每列的平均值   
 */  

int main01(void)
{
	int buf[2][3] ={ {1, 2, 3}, {4, 5, 6}};
//	int *p[3];  //指针数组
	int(*p)[3]; //定义了一个指针，指向int [3] 这种数据类型，指向二维数组的指针
	p = buf;
	printf("%d\n", sizeof(p));
	printf("%d, %d, %d, %d, %d\n", p, p+1, p+2, p+3, p+4);   //位移了  1 * sizeof(int[3])  个字节 
	
    int i;
    int j;   //打印二维数组 
	for(i = 0; i < 2; i++){
		for(j = 0; j < 3; j++){
			printf("%d,", p[i][j]);
		}
		printf("\n");
	}	
		printf("\n");
		
	
      // 使用指针  打印二维数组 
	for(i = 0; i < 2; i++){
		for(j = 0; j < 3; j++){
			printf("%d,", *(*(p + i) + j));
		}
		printf("\n");
	}	
		printf("\n");	
	
	return 0;
}


int main(void)
{
	int buf[3][5] = { {2, 4, 3, 5, 3}, {7, 2, 6, 8, 1}, {7, 3, 9, 0, 2} }
    //不允许使用数组下标，只能通过指向二维数组的指针求出数组中每行和每列的平均值   
}
