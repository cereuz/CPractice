#include <stdio.h>
#include <string.h>

void reverse(char *str)   //�ַ������� 
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

void reverse2(char *str)   //���� �ַ������� 
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
	printf("%d, %d\n", sizeof(p), sizeof(buf));   //64λint �� 8���ֽڣ�  ������ 4 * 12  =  48λ  
	
	char str[100] = "you are good ! ";
	reverse(str);

    char str2[100] = "�����й��ˣ��Ұ��й�����";
	reverse2(str2); 
	return 0;
}
