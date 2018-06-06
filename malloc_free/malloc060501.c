#include <stdio.h>

void code(char *s)
{
	while(*s)  //遍历一个字符串 
	{
		(*s)++;
		s++;
	}
}

void decode(char *s)
{
	while(*s)  //遍历一个字符串 
	{
	    (*s)--;
		s++;  	
	}
}  

int main01(void)  //加密文件 
{
	char s[1024] = { 0 };
	FILE *p = fopen("E:\\testwork\\b.txt", "r");  //用读的方式打开一个文件
	FILE *p1 = fopen("E:\\testwork\\b2.txt", "w");  //用写的方式打开一个文件
	//foef(p);   //如果已经到了文件结尾，函数返回真 
	while(!feof(p))   //如果没有到文件结尾，那么就一直循环
	{
		memset(s, 0, sizeof(s));
		fgets(s, sizeof(s), p);  //第一个参数是一个内存地址，第二个参数是这块内存的大小，第三个参数是fopen返回的文件指针 
        code(s);  //加密文件 
		fputs(s, p1);         
	 } 
	fclose(p);
	fclose(p1);
	return 0; 
}

int main(void)  //解密文件 
{
	char s[1024] = { 0 };
	FILE *p = fopen("E:\\testwork\\b2.txt", "r");  //用读的方式打开一个文件
	FILE *p1 = fopen("E:\\testwork\\b3.txt", "w");  //用写的方式打开一个文件
	//foef(p);   //如果已经到了文件结尾，函数返回真 
	while(!feof(p))   //如果没有到文件结尾，那么就一直循环
	{
		memset(s, 0, sizeof(s));
		fgets(s, sizeof(s), p);  //第一个参数是一个内存地址，第二个参数是这块内存的大小，第三个参数是fopen返回的文件指针 
        decode(s);  //解密文件 
		fputs(s, p1);         
	 } 
	fclose(p);
	fclose(p1);
	return 0; 
}
