#include <stdio.h>

/*
 * memset ,  memcpy ,  memmove  函数 
 *    这三个函数分别实现内存设置，内存拷贝 和  内存移动 
 *    使用 memcpy 的时候，一定要确保内存没有重叠区域。 
 */ 
 
 //打印数组
 void print_array(int buf[])
 {
 	int i = 0;
 	for(i = 0; i < 10; i++)
 	{
 		printf("buf[%d] = %d, ", i, buf[i]);
	 }
	 printf("\n");
  } 
 
 int main01(void)
 {
 	int buf[1024] = { 0 };
 	buf[0] = 8;
 	buf[1] = 9;
 	buf[4] = 8;
 	
 	//想将这个buf再一次初始化
                               // 	buf[10] = { 0 };   //错误的语法，这个只能在定义数组的时候且第一次初始化的时候使用。 
	 int i;
	 for(i = 0; i < 10; i++)
	 {
	 	buf[i] = 0;
	  } 
 	
 	memset(buf, 0, sizeof(buf)); //第一个参数是要设置的内存地址，第二个参数是要设置的初始化的值，第三个参数是内存大小，单位字节 
 	
 	print_array(buf);
 	return 0;
 }
 
 
 int main(void)
 {
 	int buf1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 	int buf2[10];
 	memcpy(buf2, buf1, sizeof(buf1));  //将buf1的内容全部拷贝到buf2， 拷贝大小为第三个参数：字节
	print_array(buf2);
	
	memmove(buf2, buf1, sizeof(buf1));  //memmove 函数并没有改变原始内存的值 
	print_array(buf2);  
	print_array(buf1);
 }
