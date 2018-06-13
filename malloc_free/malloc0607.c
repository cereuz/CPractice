#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main01(void)
{
	FILE *p = fopen("E:\\testwork\\d.txt", "r");
	while(!feof(p))
	{
		char buf[100] = { 0 };
		fgets(buf, sizeof(buf), p);
		printf("%s", buf);
	}
	fclose(p);
	return 0;
}

int main02(void)
{
	FILE *p = fopen("E:\\testwork\\e.txt", "r");
	while(!feof(p))
	{
		char buf[100] = { 0 };
//		fgets(buf, sizeof(buf), p);
//    	 fscanf(p, "%s", buf); //fscanf与scanf用法基本一致，fscanf是从一个文件读取输入，scanf是从键盘读取输入。 
        int a = 0;
        int b = 0;
        fscanf(p, "%d + %d = ", &a, &b);
        printf("a = %d, b = %d\n", a, b); 
//		printf("%s\n", buf);  
	}
	fclose(p);
	return 0;
}

int main03(void)
{
	FILE *p = fopen("E:\\testwork\\e.txt", "w");
	char buf[100] = "Hello World";
	fprintf(p, "%s", buf); //和printf功能一样，fprintf将输入到文件里面 
	fclose(p);
	return 0;
}

int main04(void)
{
	FILE *p = fopen("E:\\testwork\\e.txt", "w");
	char buf[100] = "Hello World , Friends";
	int a = 6;
	int b = 7;
	fprintf(p, "%s, %d, %d", buf, a, b); //和printf功能一样，fprintf将输入到文件里面 
	fclose(p);
	return 0;
}

int main(void)
{
	FILE *p = fopen("E:\\testwork\\e1.txt", "w");
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i;
    for(i = 0; i < 10; i++)
    {
    	fprintf(p, "array[%d] = %d\n", i, array[i]);
	}
//	int a = 6;
//	int b = 7;
//	fprintf(p, "%s, %d, %d", buf, a, b); //和printf功能一样，fprintf将输入到文件里面 
	fclose(p);
	return 0;
}
