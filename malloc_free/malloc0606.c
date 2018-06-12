#include <stdio.h>

int calc_string(const char *s)
{
	char buf1[100] = { 0 };
	char oper1 = 0;
	char buf2[100] = { 0 };
	
	int len = strlen(s);  //得到字符串的长度
	
	int i;
	for(i = 0; i < len; i++)
	{
		if (s[i] == '+' || s[i] == '-'|| s[i] == '*' || s[i] == '/')
		{
			strncpy(buf1, s, i); //取计算符号前边的内容 
			oper1 = s[i];   //取计算符号 
			break;
		 } 
	 } 
	 
	 int start = i + 1;
	 for(; i < len; i++)
	 {
	 	if (s[i] == '=')
	 	{
	 		strncpy(buf2, &s[start], i - start);
		 }
	 }
	 
//	 printf("buf1 = %s, oper1 = %c, buf2 = %s\n", buf1, oper1, buf2);
	 
	 switch(oper1)
	 {
	 	case '+':
	 		return atoi(buf1) + atoi(buf2);
	 	case '-':
	 		return atoi(buf1) - atoi(buf2);
		case '*':
	 		return atoi(buf1) * atoi(buf2);
		case '/':
	 		{
	 			int a = atoi(buf2);
	 			if(a)
	 			   return atoi(buf1) / atoi(buf2);
	 			else 
	 			   return 0;
			 }
	 }
}

void cutreturn(char *s)
{
	int len = strlen(s);
	if((s[len - 1] == '\n'))
	    s[len - 1] = 0;
}

int main01(void)
{
	const char *s = "882          /   0 = ";
	printf("%d\n", calc_string(s));
	return 0;
}

int main02(void)  //读取文件
{
	FILE *p = fopen("E:\\testwork\\d.txt", "r"); //读取文件 
	char buf[1024];
	char buf1[1024];
	while( !feof(p))
	{
		memset(buf, 0, sizeof(buf));
		fgets(buf, sizeof(buf), p);// 从文件中读取一行记录，字符串最后是以"\n"结尾的
		 cutreturn(buf);  //去掉换行符 ‘\n ’ 
		int value = calc_string(buf);
		sprintf(buf1, "%s%d", buf, value); 
		printf("buf1 = %s\n", buf1);  
	}
	return 0;
}

int main(void)  //读取文件，写入文件 
{
	FILE *p = fopen("E:\\testwork\\d.txt", "r"); //读取文件 
	FILE *p1 = fopen("E:\\testwork\\d1.txt", "w"); //写入文件 
	char buf[1024];
	char buf1[1024];
	while( !feof(p))
	{
		memset(buf, 0, sizeof(buf));
		fgets(buf, sizeof(buf), p);// 从文件中读取一行记录，字符串最后是以"\n"结尾的
		 cutreturn(buf);  //去掉换行符 ‘\n ’ 
		int value = calc_string(buf);
		memset(buf1, 0, sizeof(buf1)); 
		sprintf(buf1, "%s%d\n", buf, value);//将buf和buf1计算结果重新组合成一个字符串 
//		printf("buf1 = %s\n", buf1);
        fputs(buf1, p1);//将重新组合后的字符串写入新的文件 
	}
	fclose(p);
	fclose(p1);
	return 0;
}
