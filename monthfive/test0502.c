#include <stdio.h>

int main01() {
	char s[26] = "Hello World!你好，世界";
	int len = strlen(s); // 得到字符串长度，返回一个字符串中有效字符的数量（不包含字符串结尾的0）
	printf("%d\n",len);

	char s1[100] = "abc123456789";
	strcat(s,s1);  //将两个字符串合并，结果放入第一个参数里面，strcat也存在缓冲区溢出的问题。

	strncat(s,s1,6); //合并的时候可以限制追加多少个字符
	printf("%s\n",s);
}

int main02() {
	char s1[100] = "hello";
	char s2[10] = "hello";
	//字符串不能通过 == 来比较
	if(strcmp(s1,s2) == 0) { // 如果strcmp的返回值为 0 ，代表参数中的两个字符串内容相同
		printf("相同\n");
	} else {
		printf("不相同\n");
	}
}

int main03() {
	char s1[100] = "123456";
	char s2[10] = "abcdef";
	//字符串不能通过 == 来比较
	if(strncmp(s1,s2,5) == 0) { // 如果strcmp的返回值为 0 ，代表参数中的两个字符串内容相同
		printf("相同\n");
	} else {
		printf("不相同\n");
	}

	/*
	strcpy(s1,s2); //将s2的内容拷贝到s1
	printf("%s\n",s1);
	*/

	strncpy(s1,s2,3);   //将 s2指定个数的内容拷贝到s1
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
	const char *buf = strchr(s, 'l'); //在s这个字符串中间，查找第二个参数指定的字符

	printf("%d\n" , buf);

	buf = strstr(s, "wor");

	printf("%s\n", buf);
	return 0;
}

int main07() {
	char s[100] = "50 + 61 =";
	strcpy(s,"abc_12345_ee_cool");  //将字符串中所有 _ 符号分割的子串揪出来

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
	strcpy(s,"abc_12345_ee_cool");  //将字符串中所有 _ 符号分割的子串揪出来

	const char *buf = strchr(s, 'd');
	buf = strtok(s,"_");
	while(buf)
	{
	printf("%s\n", buf);
	buf = strtok(NULL,"_");	
	}
    return 0;
}
