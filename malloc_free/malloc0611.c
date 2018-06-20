#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <time.h>

int main(void)
{
	clock_t c1 = clock();   //得到系统当前时间，单位：毫秒 
	struct stat st = { 0  };  //定义一个结构体， 名字叫st 
	stat("E:\\testwork\\a.wmv", &st);  //调用完stat函数之后，文件相关的信息都保存在了st结构中
	//st.st_size //得到文件的大小 
	printf("%u\n", st.st_size);
	printf("Hello World!\n");
	
	char *array = malloc(st.st_size);  //根据文件大小在堆中动态的分配一块内存
	FILE *p = fopen("E:\\testwork\\a.wmv", "rb");
	fread(array, sizeof(char), st.st_size, p);  //相当于一下把整个文件放入了内存
	fclose(p);
	p = fopen("E:\\testwork\\b.wmv", "wb");
	fwrite(array, sizeof(char), st.st_size, p);   //将堆中的信息一下都写入文件
	fclose(p);
	
	clock_t c2 = clock();   //得到系统当前时间，单位：毫秒 
	
	printf("end!-- %u\n", c2 - c1);
	return 0; 
}
