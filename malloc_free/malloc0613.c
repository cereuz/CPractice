#include <stdio.h>
#include <string.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));
	int i;
	FILE *p = fopen("E:\\testwork\\a0621.txt", "w");
	for(i = 0; i < 10000000; i++)
	{
		fprintf(p, "%d\n", rand() % 513);
	}
	//�ı��ļ���ÿ�д���һ�������������Ǵ�0 �� 512֮��һ�������
	//������ļ��������򣬲����ö��ڴ棬ֻ����ջ�ڴ档 
	fclose(p);
	printf("end\n");
	return 0;
}
