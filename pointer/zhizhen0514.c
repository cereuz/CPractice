#include <stdio.h>
#include <string.h>

void reverse(char *str)   //字符串逆序 
{
	char *str_start = &str[0];
	char *str_end = &str[strlen(str) - 1];
	
	while (str_start < str_end)
	{
		char *temp = *str_start;
		*str_start = *str_end;
		*str_end = temp;
		str_start++;
		str_end--;
	}
	printf("%s\n", str);
}

void reverse2(char *str)   //汉字 字符串逆序 
{
	short *str_start = &str[0];
	short *str_end = &str[strlen(str) - 2];
	
	while (str_start < str_end)
	{
		short *temp = *str_start;
		*str_start = *str_end;
		*str_end = temp;
		str_start++;
		str_end--;
	}
	printf("%s\n", str);
}



int main(void)
{
	int buf[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 23};
	int *p = buf;
	printf("%d, %d\n", sizeof(p), sizeof(buf));   //64位int 是 8个字节，  数组是 4 * 12  =  48位  
	
	char str[100] = "you are good ! ";
	reverse(str);

    char str2[100] = "我是中国人，我爱中国画。";
	reverse2(str2); 
	return 0;
}
