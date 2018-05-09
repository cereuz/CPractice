#include <stdio.h>

/*
 *  int *p;//表示定义一个指针变量
 *  *p;  //代表指针所指内存的实际数据   
 *       //切记，指针变量只能存放地址，不能将一个int类型变量直接赋值给一个指针 
 *   & 取地址运算符   ：  & 可以取得一个变量在内存当中的地址 
 */ 


int main01(void)
{
	int a = 0;
	int b = 26;
	char str[10] = {0};
	int str2[9] = {0};
	
	printf("%p\n", &a);
	printf("%p\n", a);
	printf("%p\n", &b);
	printf("%p\n", b);
	
	printf("%p\n", &str);
	printf("%p\n", &str[0]);
	printf("%p\n", &str[1]);
	
	printf("%p\n", &str2);
	printf("%p\n", &str2[0]);
	printf("%p\n", &str2[1]);
	
	int *p = &a;  //得到变量a的地址，将这个地址赋值给变量p
	printf("%X\n", p); 
	//地址虽然是一个整数，但地址是一个特殊的整数，是不能直接通过整数来操作的。
	
	int *p1; //定义一个变量，名字叫p1，它可以指向一个int的地址
	p1 = &b;  //指针变量的值一般不能直接赋值给一个整数，而是通过取变量地址的方式赋值。  需要通过变量地址的方式。
	        //切记，指针变量只能存放地址，不能将一个int类型变量直接赋值给一个指针 
 } 
 
 int main(void)
 {
 	int a = 9;  //定义变量 a  
 	int *p;    //定义变量 *p        
 	p = &a;   //*p的意思是指针变量指向内存的内容   p代表指针变量指向内存的地址。【*p对应内容， p对应地址】 
	
	int b = *p;
	printf("%d\n", b);
	return 0; 
  } 
