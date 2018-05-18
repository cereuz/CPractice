#include <stdio.h>

/*
 * 1.指针变量 作为函数的参数 
 *     函数的参数可以是指针类型。  它的作用是将一个变量的地址传送给另一个函数
 *     通过函数的指针参数  可以间接的实现形参修改实参的值。 
 * 2.一维数组名作为函数参数
 *     当数组名作为函数参数的时候，C语言将数组名解释为指针
 *     int  func(int array[10]);
 * 3.二维数组名作为函数参数
 *     二维数组作为函数参数时，可以不指定第一个下标。
 *     int func(int array[][10])      
 */ 

//当数组名作为函数的参数时，数组名其实就是一个指针变量 


//void set_array(int *buf)   //数组名代表数组的首地址  这里 int buf[]  等同于  int *buf 
void set_array(int buf[])   //修改数组 ， 这里不知道数组的长度 
{              
    printf("sizeof(buf) = %d\n", sizeof(buf));
	buf[0] = 100;
	buf[1] = 200;
}

void set_array2(int *buf)    // 使用指针   修改数组 
{
	printf("sizeof(buf) = %d\n", sizeof(buf));
	*buf = 100;
	buf++;
	*buf = 200;
}


void print_array01(int buf[])   //打印数组 
{
	int i;
	for(i = 0; i < 10; i++)
	{
		printf("buf[%d] = %d\n", i, buf[i]);
	}
}

void print_array(int *buf, int n)   //使用指针   打印数组   虑数组长度 
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
	set_array2(buf);   //这里放的数组的首地址。  这里buf 和   &buf是一样的 
	print_array01(buf);
	
	return 0;
}


int main(void)
{
	int buf[] = {1, 2, 3, 4, 5, 66, 7, 8, 9, 10, 32, 99, 36, 72};
	printf("sizeof(buf) = %d\n", sizeof(buf));
	set_array2(buf);   //这里放的数组的首地址。  这里buf 和   &buf是一样的 
	print_array(buf, sizeof(buf) / sizeof(int));  //适配所有硬件，计算数组的长度
	
	return 0; 
}
