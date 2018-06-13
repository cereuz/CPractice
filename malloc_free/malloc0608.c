#include <stdio.h>

int main01(void)
{
	FILE *p = fopen("E:\\testwork\\e1.txt", "rb");  //用读二进制的方式打开一个文件
	while( !feof(p))
	{
		char buf[10] = { 0 };
		fread(buf, sizeof(char), sizeof(buf) - 1, p);   //第一个参数是缓冲区，第二个参数是读取的时候最小单位大小。第三个参数是一次读几个单位。第四个参数是打开的文件指针。 
		printf("%s", buf); 
	}
	fclose(p);
	return 0; 

}

int main02(void)
{
	FILE *p = fopen("E:\\testwork\\e1.txt", "rb");  //用读二进制的方式打开一个文件
	char buf[1024] = { 0 };
	//fread返回值代表读取了多少记录数。 
	size_t res = fread(buf, sizeof(char), sizeof(buf), p);   //第一个参数是缓冲区，第二个参数是读取的时候最小单位大小。第三个参数是一次读几个单位。第四个参数是打开的文件指针。 
    printf("res = %u\n", res); 
    
    res = fread(buf, sizeof(char), sizeof(buf), p);   //第一个参数是缓冲区，第二个参数是读取的时候最小单位大小。第三个参数是一次读几个单位。第四个参数是打开的文件指针。 
    printf("res = %u\n", res); 
//	while( !feof(p))
//	{
//		char buf[10] = { 0 };
//		fread(buf, sizeof(char), sizeof(buf) - 1, p);   //第一个参数是缓冲区，第二个参数是读取的时候最小单位大小。第三个参数是一次读几个单位。第四个参数是打开的文件指针。 
//		printf("%s", buf); 
//	}
	fclose(p);
	return 0; 
}


int main(void)
{
	FILE *p = fopen("E:\\testwork\\e2.txt", "rb");  //用读二进制的方式打开一个文件
	while(!feof(p))
	{
		char buf[1024] = { 0 };
		//fread返回值代表读取了多少记录数。 
		size_t res = fread(buf, sizeof(char), sizeof(buf), p);   //第一个参数是缓冲区，第二个参数是读取的时候最小单位大小。第三个参数是一次读几个单位。第四个参数是打开的文件指针。 
        int i;
        for(i = 0; i < res; i++)
        {
        	printf("buf[%d] = %x\n", i, buf[i]);
		}
	}
	fclose(p);
	return 0;
}

