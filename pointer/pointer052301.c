#include <stdio.h>

int main01(int argc, char *args[])
{
	printf("%d\n", argc);
	//argc �������ִ�е�ʱ���м����������������Ʊ������һ������������argc��СֵΪ 1 ��
	//�ڶ���������һ��ָ�����飬����ÿ����Ա�������� char * 
	printf("args[0] = %s\n", args[0]);
	//args ��һ��ָ�����飬���ĳ�Ա�����Ƕ����أ�  argc����������Ǹ���main����args��������ж��ٳ�Ա�ġ� 
	
	int i;
	for(i = 0; i < argc; i++)
	{
		printf("args[%d] = %s\n", i, args[i]);
	}
	return 0;
}


int main(int argc, char *args[])
{
	char buf[100] = "dir";
	int i;
	for(i = 0; i < argc; i++)
	{
		strcat(buf, args[i]);
	}
	printf("buf = %s\n", buf);
	return 0;
	
	system("dir");
	return 0;
}
