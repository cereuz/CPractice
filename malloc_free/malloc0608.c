#include <stdio.h>

int main01(void)
{
	FILE *p = fopen("E:\\testwork\\e1.txt", "rb");  //�ö������Ƶķ�ʽ��һ���ļ�
	while( !feof(p))
	{
		char buf[10] = { 0 };
		fread(buf, sizeof(char), sizeof(buf) - 1, p);   //��һ�������ǻ��������ڶ��������Ƕ�ȡ��ʱ����С��λ��С��������������һ�ζ�������λ�����ĸ������Ǵ򿪵��ļ�ָ�롣 
		printf("%s", buf); 
	}
	fclose(p);
	return 0; 

}

int main02(void)
{
	FILE *p = fopen("E:\\testwork\\e1.txt", "rb");  //�ö������Ƶķ�ʽ��һ���ļ�
	char buf[1024] = { 0 };
	//fread����ֵ�����ȡ�˶��ټ�¼���� 
	size_t res = fread(buf, sizeof(char), sizeof(buf), p);   //��һ�������ǻ��������ڶ��������Ƕ�ȡ��ʱ����С��λ��С��������������һ�ζ�������λ�����ĸ������Ǵ򿪵��ļ�ָ�롣 
    printf("res = %u\n", res); 
    
    res = fread(buf, sizeof(char), sizeof(buf), p);   //��һ�������ǻ��������ڶ��������Ƕ�ȡ��ʱ����С��λ��С��������������һ�ζ�������λ�����ĸ������Ǵ򿪵��ļ�ָ�롣 
    printf("res = %u\n", res); 
//	while( !feof(p))
//	{
//		char buf[10] = { 0 };
//		fread(buf, sizeof(char), sizeof(buf) - 1, p);   //��һ�������ǻ��������ڶ��������Ƕ�ȡ��ʱ����С��λ��С��������������һ�ζ�������λ�����ĸ������Ǵ򿪵��ļ�ָ�롣 
//		printf("%s", buf); 
//	}
	fclose(p);
	return 0; 
}


int main03(void)
{
//	FILE *p = fopen("E:\\testwork\\e2.txt", "rb");  //�ö������Ƶķ�ʽ��һ���ļ�
	FILE *p = fopen("E:\\testwork\\2.jpg", "rb");  //�ö������Ƶķ�ʽ��һ���ļ�
	while(!feof(p))
	{
		char buf[1024] = { 0 };
		//fread����ֵ�����ȡ�˶��ټ�¼���� 
		size_t res = fread(buf, sizeof(char), sizeof(buf), p);   //��һ�������ǻ��������ڶ��������Ƕ�ȡ��ʱ����С��λ��С��������������һ�ζ�������λ�����ĸ������Ǵ򿪵��ļ�ָ�롣 
        int i;
        for(i = 0; i < res; i++)
        {
        	printf("buf[%d] = %x\n", i, buf[i]);
		}
	}
	fclose(p);
	return 0;
}

int main04(void)
{
	FILE *p = fopen("E:\\testwork\\f.dat", "wb");
	char buf[1024] = { 0 };
	buf[0] = 'a';
	buf[1] = 'b';
	buf[2] = 'c';
	buf[3] = 'd';
	fwrite(buf, sizeof(char), 10, p);
	fclose(p);
}

int main05(void)
{
	FILE *p = fopen("E:\\testwork\\f.dat", "wb");
	int a = 100;
	fwrite(&a, sizeof(char), 4, p);
	fclose(p);
	return 0;
}

int main(void)
{
	FILE *p = fopen("E:\\testwork\\f.dat", "wb");
	int a = 0x123456789;
	fwrite(&a, sizeof(char), 4, p);
	fclose(p);
	return 0;
}
