#include <stdio.h>

/*
 *   栈溢出： 当栈空间已满，但是还往栈内存压变量，这个就叫栈溢出。
 *       对于一个 32 位操作系统，最大管理 4G 内存，其中 1G 是给操作系统自己用的。剩下的 3G 都是给用户程序。一个用户程序理论上可以使用 3G 的内存空间 
 *     
 *   堆区： 堆 heap 和栈一样，也是一种在程序运行过程中可以随时修改的内存区域，但没有栈那样先进先出的顺序。
 *                      堆是一个大容器，它的容量要远远大于栈，但是在C语言中，堆内存空间的申请和释放需要手动通过代码来完成。
 *						堆内存的分配和释放     malloc     free  
 */



int main01(void)
{
	char array[1024 * 1024 * 100] = { 0 };  // 100M ,定义一个超大的数组，一定会栈溢出 
	array[0] = 'a';
	printf("%s\n", array);
	return 0; 
}


void print_array(int *p, int n) //打印数组 
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("p[%d] = %d\n", i, p[i]);
	}
}

int main(void)    //malloc  与  free  一一对应。 
{
	//定义一个堆数组 。  堆内存中的数组 
	int *p = (int *)malloc(sizeof(int) * 100000000); //在堆中间申请内存，在堆中申请了一个 10个int这么大的空间 
    
	memset(p, 0, sizeof(int) * 10);
	int i;
	for(i = 0; i < 10; i++)
	{
		p[i] = i;
	}
	print_array(p, 10);
	
	
	char *p1 = malloc(sizeof(char) * 10);   //在堆中申请了一个 10个char 这么大的空间。
    free(p);   //释放通过 malloc分配的堆内存 
    free(p1);   //是否通过 malloc分配的堆内存 
	
	printf("Hello World ! \n");
	return 0; 
}
