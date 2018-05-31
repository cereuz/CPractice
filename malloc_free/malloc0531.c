#include <stdio.h>

//  su
//  ps -u root
//  cd /
//  cd proc
//  cd 3192 
//  ls
//  cat maps

//  KernelPageSize:        4 kB

//  196    164  

//  堆的分配和释放
//  操作系统在管理内存的时候，最小单位不是字节，而是内存页。  4k 

int main(void)
{
	char *p = malloc(1024 * 65);
	int i = 0;
	getchar();
	free(p);
	
	while(1)   //测试  Windows系统的内存分配，内存页大小 是  4k   
	{
		int *p1 = malloc(1024 * 2);
		getchar();
	 } 
	
	return 0;
}
