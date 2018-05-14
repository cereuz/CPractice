#include <stdio.h>   
                    //系统定义的头文件，使用尖括号引用 <> 
#include "a.h"     //自定义的头文件 ，使用 双引号引用  "" 
#include "abc/b0504.h"   //引用当前文件夹内   子文件夹 的头文件 


int main()
{
	int c = max(20, 36);
	printf("c = %d\n", c);
	c = add(50, 23);
	printf("c = %d\n", c);
	c = MAX;
	printf("c = %d\n", c);
	return 0;
}
