#include <stdio.h>

int main01(int argc, char *args[])
{
	printf("%d\n", argc);
	//argc 代表程序执行的时候有几个参数，程序名称本身就是一个参数，所以argc最小值为 1 ；
	//第二个参数是一个指针数组，其中每个成员的类型是 char * 
	printf("args[0] = %s\n", args[0]);
	//args 是一个指针数组，它的成员数量是多少呢？  argc这个参数就是告诉main函数args这个数组有多少成员的。 
	
	int i;
	for(i = 0; i < argc; i++)
	{
		printf("args[%d] = %s\n", i, args[i]);
	}
	return 0;
}


int main(int argc, char *args[])
{
	char buf[100] = "dir";
	int i;
	for(i = 0; i < argc; i++)
	{
		strcat(buf, args[i]);
	}
	printf("buf = %s\n", buf);
	return 0;
	
	system("dir");
	return 0;
}
