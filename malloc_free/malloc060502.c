#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(int *a, int *b)   //交换参数的值 
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void pupple(int *p, int n)    //冒泡排序 
{
	int i;
	int j;
	for(i = 0; i < n; i++)
	{
		for(j = 1; j < n-i; j++)
		{
			if(p[j - 1] > p[j])
			{
				swap(&p[j - 1], &p[j]);
			}
		}
	}
}

void print_array(int *array, int index)
{
		//打印数组 
	int i;  
	for(i = 0; i < index; i++)
	{
	   printf("%d\n", array[i]);	
	}
	
	return 0;
}

int main01(void)   //测试排序，输出结果说明排序有效。 
{
	int array[10] = { 3,5,2,7,8,4,1,9,6,3};
	pupple(array, 10);
	
	int i;
	for(i = 0; i < 10; i++)
	{
		printf("%d\n", array[i]);
	}
	
	return 0;
}

int main02(void)  //读取并打印文件 
{
	int array[10] = { 0 };
	char buf[100];
	
	FILE *p = fopen("E:\\testwork\\b.txt", "r");
	if (p == NULL)
	{
		printf("error\n");
	} 
	  else 
	{
	   while(!feof(p))   //如果没有到达文件结尾，那么循环继续
	   {
	   memset(buf, 0, sizeof(buf));   //每次读取文件一行之前都把这个buffer清空。
	   fgets(buf, sizeof(buf), p);
	   printf("%s", buf);
	   } 
	   fclose(p);	
	}
}


int main03(void)   //在栈中建立一个数组 对文件进行排序 
{
	int index = 0; //这是个计数器 
	int array[100] = { 0 };   //在这个数组范围内的可以正常运行。 
	char buf[100];
	
	FILE *p = fopen("E:\\testwork\\c.txt", "r");
	if (p == NULL)
	{
		printf("error\n");
	} 
	  else 
	{
	   while(!feof(p))   //如果没有到达文件结尾，那么循环继续
	   {
	   memset(buf, 0, sizeof(buf));   //每次读取文件一行之前都把这个buffer清空。
	   fgets(buf, sizeof(buf), p);
	   array[index] = atoi(buf);  //将读取到的一行转化为int，并赋值给数组成员 
       index++;  
//	   printf("%s", buf);
	   } 
	   fclose(p);	
	}
//	print_array(array, 10);
//	printf("----------------------------"); 
	pupple(array, index);//将数组排序
//	print_array(array, 10);
	
	p = fopen("E:\\testwork\\c1.txt", "w"); //用写的方式打开c.txt
	int i;
	for(i = 0; i < index; i++)
	{
	   memset(buf, 0, sizeof(buf));   //每次读取文件一行之前都把这个buffer清空。
	   sprintf(buf, "%d\n", array[i]);  //将数组的成员转化成字符串 
	   fputs(buf, p);	
	 } 
	 fclose(p);
	
	return 0;
}


int main(void)   //在堆中建立一个数组 对文件进行排序 
{
	int index = 0; //这是个计数器 
//	int array[100] = { 0 };   //栈中的数组，在这个数组范围内的可以正常运行。 
	char buf[100];
	
	FILE *p = fopen("E:\\testwork\\c.txt", "r"); //第一次打开c.txt ， 是要知道这个文件有多少行 
	if (p == NULL)
	{
		printf("error\n");
	} 
	  else 
	{
	   while(!feof(p))   //如果没有到达文件结尾，那么循环继续。 第一次循环的时候并不是要处理文件内容，而是要统计文件的行数 
	   {
	   memset(buf, 0, sizeof(buf));   //每次读取文件一行之前都把这个buffer清空。
	   fgets(buf, sizeof(buf), p);
//	   array[index] = atoi(buf);  //将读取到的一行转化为int，并赋值给数组成员 
       index++;  
//	   printf("%s", buf);
	   } 
	   fclose(p);	
	   
	   //需要先计算出文件的数字行数。 
	   int *array = calloc(sizeof(int), index);  //在堆中建立一个动态数组，动态数组的成员数量和c.txt文件的行数一样多 
       
       p = fopen("E:\\testwork\\c.txt", "r"); //第一次打开c.txt ， 是要知道这个文件有多少行 
	   index = 0; //计数器从 0  重新开始 
	if (p == NULL)
	{
		printf("error\n");
	} 
	  else 
	{
	   while(!feof(p))   //如果没有到达文件结尾，那么循环继续
	   {
	   memset(buf, 0, sizeof(buf));   //每次读取文件一行之前都把这个buffer清空。
	   fgets(buf, sizeof(buf), p);
	   array[index] = atoi(buf);  //将读取到的一行转化为int，并赋值给数组成员 
       index++;  
//	   printf("%s", buf);
	   } 
	   fclose(p);	
	}
//	print_array(array, 10);
//	printf("----------------------------"); 
	pupple(array, index);//将数组排序
//	print_array(array, 10);
	
	p = fopen("E:\\testwork\\c1.txt", "w"); //用写的方式打开c.txt
	int i;
	for(i = 0; i < index; i++)
	{
	   memset(buf, 0, sizeof(buf));   //每次读取文件一行之前都把这个buffer清空。
	   sprintf(buf, "%d\n", array[i]);  //将数组的成员转化成字符串 
	   fputs(buf, p);	
	 } 
	 fclose(p);
	
	return 0;
}
}
