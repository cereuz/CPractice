#include <stdio.h>

void code(char *s)
{
	while(*s)  //����һ���ַ��� 
	{
		(*s)++;
		s++;
	}
}

void decode(char *s)
{
	while(*s)  //����һ���ַ��� 
	{
	    (*s)--;
		s++;  	
	}
}  

int main01(void)  //�����ļ� 
{
	char s[1024] = { 0 };
	FILE *p = fopen("E:\\testwork\\b.txt", "r");  //�ö��ķ�ʽ��һ���ļ�
	FILE *p1 = fopen("E:\\testwork\\b2.txt", "w");  //��д�ķ�ʽ��һ���ļ�
	//foef(p);   //����Ѿ������ļ���β������������ 
	while(!feof(p))   //���û�е��ļ���β����ô��һֱѭ��
	{
		memset(s, 0, sizeof(s));
		fgets(s, sizeof(s), p);  //��һ��������һ���ڴ��ַ���ڶ�������������ڴ�Ĵ�С��������������fopen���ص��ļ�ָ�� 
        code(s);  //�����ļ� 
		fputs(s, p1);         
	 } 
	fclose(p);
	fclose(p1);
	return 0; 
}

int main(void)  //�����ļ� 
{
	char s[1024] = { 0 };
	FILE *p = fopen("E:\\testwork\\b2.txt", "r");  //�ö��ķ�ʽ��һ���ļ�
	FILE *p1 = fopen("E:\\testwork\\b3.txt", "w");  //��д�ķ�ʽ��һ���ļ�
	//foef(p);   //����Ѿ������ļ���β������������ 
	while(!feof(p))   //���û�е��ļ���β����ô��һֱѭ��
	{
		memset(s, 0, sizeof(s));
		fgets(s, sizeof(s), p);  //��һ��������һ���ڴ��ַ���ڶ�������������ڴ�Ĵ�С��������������fopen���ص��ļ�ָ�� 
        decode(s);  //�����ļ� 
		fputs(s, p1);         
	 } 
	fclose(p);
	fclose(p1);
	return 0; 
}
