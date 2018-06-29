#include <stdio.h>
#include <string.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));
	int i;
	FILE *p = fopen("E:\\testwork\\a0621.txt", "w");
	for(i = 0; i < 10000000; i++)
	{
		fprintf(p, "%d\n", rand() % 513);
	}
	//文本文件，每行代表一个整数，整数是从0 到 512之间一个随机数
	//对这个文件进行排序，不能用堆内存，只能用栈内存。 
	fclose(p);
	printf("end\n");
	return 0;
}
