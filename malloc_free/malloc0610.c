#include <stdio.h>

//�����Ƽ��� 
void code (char *p, size_t n)
{
	size_t i;
	for(i= 0; i < n; i++)
	{
		p[i] += 3;
	}
}

//�����ƽ��� 
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
		size_t res = fread(buf, sizeof(char), sizeof(buf), p); //���ش�Դ�ļ��ж�ȡ���ֽ��� 
		code(buf, res);  //�������ļ����� 
		decode(buf, res);  //�������ļ����� 
		fwrite(buf,sizeof(char), res, p1); //��Դ�ļ��ж�ȡ�����ֽڣ���ô����Ŀ���ļ���д������ֽ� 
	}
	fclose(p);
	fclose(p1);
	printf("end\n");
	return 0;
	
}

