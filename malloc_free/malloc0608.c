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


int main(void)
{
	FILE *p = fopen("E:\\testwork\\e2.txt", "rb");  //�ö������Ƶķ�ʽ��һ���ļ�
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

