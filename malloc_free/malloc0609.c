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
		size_t res = fread(buf, sizeof(char), sizeof(buf), p); //���ش�Դ�ļ��ж�ȡ���ֽ��� 
		fwrite(buf,sizeof(char), res, p1); //��Դ�ļ��ж�ȡ�����ֽڣ���ô����Ŀ���ļ���д������ֽ� 
	}
	fclose(p);
	fclose(p1);
	printf("end\n");
	return 0;
	
}
