#include <stdio.h>

void printf_array(int s[])
{
	int i;
	for(i = 0; i < 10; i++)   //打印数组成员值 
	{
		printf("%d, ", s[i]);
	 } 
	 printf("\n");
}


int main(void)
{
	int buf[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int *p = buf;
	printf("%d, %d, %d, %d\n", *p, buf[0], &buf, &buf[1]);
	printf("%d, %d, %d\n", sizeof(*p), sizeof(buf), sizeof(p));
	
	//方法一
	*(p + 3) = 20; //将数组中下标为3的成员赋值
	//方法二
	p[5] = 30; //将数组中下标为5的成员赋值
	//方法三
	p += 7;
	*p = 40; //将数组中下标为7的成员赋值
	printf_array(buf);  //打印数组 
	//方法一和方法二都没有改变p指向的内存地址，但方法三修改了p指向的值
	
	p[2] = 100;  //这个时候修改的是下标为 9 的数组成员 （ 7 +  2 = 9 ） 
	printf_array(buf);  //打印数组 
	
	p[1] = 300;
	printf_array(buf);  //打印数组 	
}
