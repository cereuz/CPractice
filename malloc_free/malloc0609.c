#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	FILE *p = fopen("E:\\testwork\\a.wmv", "rb");
	FILE *p1 = fopen("E:\\testwork\\b.wmv", "wb");
	char buf[1024 * 4];
	while(!feof(p))
	{
		memset(buf, 0, sizeof(buf));
		size_t res = fread(buf, sizeof(char), sizeof(buf), p); //返回从源文件中读取的字节数 
		fwrite(buf,sizeof(char), res, p1); //从源文件中读取多少字节，那么就往目标文件中写入多少字节 
	}
	fclose(p);
	fclose(p1);
	printf("end\n");
	return 0;
	
}
