#include <stdio.h>
#include <time.h>

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
	
	clock_t c1 = clock();   //�õ�ϵͳ��ǰʱ�䣬��λ������ 
	
	FILE *p = fopen("E:\\testwork\\a.wmv", "rb");
	FILE *p1 = fopen("E:\\testwork\\d.wmv", "wb");

//	FILE *p = fopen("E:\\testwork\\testx.xml", "rb");
//	FILE *p1 = fopen("E:\\testwork\\testb.xml", "wb");
	
//	FILE *p = fopen("E:\\testwork\\testb.xml", "rb");
//	FILE *p1 = fopen("E:\\testwork\\testc.xml", "wb");
	
	
    
	char buf[1024 * 4];
//	char buf[102];
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
	
	clock_t c2 = clock();   //�õ�ϵͳ��ǰʱ�䣬��λ������ 
	printf("end!-- %u\n", c2 - c1);
	return 0;
	
}

