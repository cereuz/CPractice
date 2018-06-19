#include <stdio.h>

//二进制加密 
void code (char *p, size_t n)
{
	size_t i;
	for(i= 0; i < n; i++)
	{
		p[i] += 3;
	}
}

//二进制解密 
void decode (char *p, size_t n)
{
	size_t i;
	for(i= 0; i < n; i++)
	{
		p[i] -= 3;
	}
}

int main(void)
{
//	FILE *p = fopen("E:\\testwork\\b.wmv", "rb");
//	FILE *p1 = fopen("E:\\testwork\\c.wmv", "wb");
	
	FILE *p = fopen("E:\\testwork\\c.wmv", "rb");
	FILE *p1 = fopen("E:\\testwork\\d.wmv", "wb");

//	FILE *p = fopen("E:\\testwork\\testx.xml", "rb");
//	FILE *p1 = fopen("E:\\testwork\\testb.xml", "wb");
	
//	FILE *p = fopen("E:\\testwork\\testb.xml", "rb");
//	FILE *p1 = fopen("E:\\testwork\\testc.xml", "wb");
	
	

	char buf[1024 * 4];
	while(!feof(p))
	{
		memset(buf, 0, sizeof(buf));
		size_t res = fread(buf, sizeof(char), sizeof(buf), p); //返回从源文件中读取的字节数 
		code(buf, res);  //二进制文件加密 
		decode(buf, res);  //二进制文件解密 
		fwrite(buf,sizeof(char), res, p1); //从源文件中读取多少字节，那么就往目标文件中写入多少字节 
	}
	fclose(p);
	fclose(p1);
	printf("end\n");
	return 0;
	
}

