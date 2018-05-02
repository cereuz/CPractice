#include <stdio.h>

int main01() {
	char s[26] = "Hello World!��ã�����";
	int len = strlen(s); // �õ��ַ������ȣ�����һ���ַ�������Ч�ַ����������������ַ�����β��0��
	printf("%d\n",len);

	char s1[100] = "abc123456789";
	strcat(s,s1);  //�������ַ����ϲ�����������һ���������棬strcatҲ���ڻ�������������⡣

	strncat(s,s1,6); //�ϲ���ʱ���������׷�Ӷ��ٸ��ַ�
	printf("%s\n",s);
}

int main02() {
	char s1[100] = "hello";
	char s2[10] = "hello";
	//�ַ�������ͨ�� == ���Ƚ�
	if(strcmp(s1,s2) == 0) { // ���strcmp�ķ���ֵΪ 0 ����������е������ַ���������ͬ
		printf("��ͬ\n");
	} else {
		printf("����ͬ\n");
	}
}

int main03() {
	char s1[100] = "123456";
	char s2[10] = "abcdef";
	//�ַ�������ͨ�� == ���Ƚ�
	if(strncmp(s1,s2,5) == 0) { // ���strcmp�ķ���ֵΪ 0 ����������е������ַ���������ͬ
		printf("��ͬ\n");
	} else {
		printf("����ͬ\n");
	}

	/*
	strcpy(s1,s2); //��s2�����ݿ�����s1
	printf("%s\n",s1);
	*/

	strncpy(s1,s2,3);   //�� s2ָ�����������ݿ�����s1
	printf("%s\n",s1);
	return 0;
}


int main04() {
	char s[100] = "abc=300";
	int i = 0;
	sscanf(s,"abc=%d", &i);
	printf("%d\n", i);
	return 0;
}

int main05() {
	char s[100] = "52+63=";
	int a = 0;
	int b = 0;
	sscanf(s,"%d + %d", &a , &b);
	printf("%d\n", a + b);
	return 0;
}


int main06() {
	char s[100] = "52 + 63 = ";
	int a = 0;
	int b = 0;

	strcpy(s, "hello world");
	const char *buf = strchr(s, 'l'); //��s����ַ����м䣬���ҵڶ�������ָ�����ַ�

	printf("%d\n" , buf);

	buf = strstr(s, "wor");

	printf("%s\n", buf);
	return 0;
}

int main07() {
	char s[100] = "50 + 61 =";
	strcpy(s,"abc_12345_ee_cool");  //���ַ��������� _ ���ŷָ���Ӵ�������

	const char *buf = strchr(s, 'd');
	buf = strtok(s,"_");
	printf("%s\n", buf);
	buf = strtok(NULL,"_");
	printf("%s\n", buf);
	buf = strtok(NULL,"_");
	printf("%s\n", buf);
	buf = strtok(s,"_");
	printf("%s\n", buf);
}

int main() {
	char s[100] = "50 + 61 =";
	strcpy(s,"abc_12345_ee_cool");  //���ַ��������� _ ���ŷָ���Ӵ�������

	const char *buf = strchr(s, 'd');
	buf = strtok(s,"_");
	while(buf)
	{
	printf("%s\n", buf);
	buf = strtok(NULL,"_");	
	}
    return 0;
}
