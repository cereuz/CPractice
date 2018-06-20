#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <time.h>

int main(void)
{
	clock_t c1 = clock();   //�õ�ϵͳ��ǰʱ�䣬��λ������ 
	struct stat st = { 0  };  //����һ���ṹ�壬 ���ֽ�st 
	stat("E:\\testwork\\a.wmv", &st);  //������stat����֮���ļ���ص���Ϣ����������st�ṹ��
	//st.st_size //�õ��ļ��Ĵ�С 
	printf("%u\n", st.st_size);
	printf("Hello World!\n");
	
	char *array = malloc(st.st_size);  //�����ļ���С�ڶ��ж�̬�ķ���һ���ڴ�
	FILE *p = fopen("E:\\testwork\\a.wmv", "rb");
	fread(array, sizeof(char), st.st_size, p);  //�൱��һ�°������ļ��������ڴ�
	fclose(p);
	p = fopen("E:\\testwork\\b.wmv", "wb");
	fwrite(array, sizeof(char), st.st_size, p);   //�����е���Ϣһ�¶�д���ļ�
	fclose(p);
	
	clock_t c2 = clock();   //�õ�ϵͳ��ǰʱ�䣬��λ������ 
	
	printf("end!-- %u\n", c2 - c1);
	return 0; 
}
