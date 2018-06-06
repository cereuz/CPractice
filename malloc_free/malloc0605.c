#include <stdio.h>
#include <string.h>
/*
 *  1.  fopen
 *
 *
 */


int main01(void)
{
  FILE *p =	fopen("E:\\testwork\\a.txt", "w");  //用可写的方式打开一个文件  
  // “w ”意思就是如果文件不存在，就创建文件，如果文件存在就覆盖。 
  fputs("1. Hello World 羊角!", p);//向文件写入一个字符串 
  fputs("\n2. Hello World 羊角!", p);//向文件写入一个字符串 
  fputs("\n3. Hello World 羊角!", p);//向文件写入一个字符串 
  fputs("\n4. Hello World 羊角!", p);//向文件写入一个字符串 
  fclose(p);  //关闭一个文件 
  //操作一个文件的步骤和把大象放冰箱是一样的。 
  
  printf("end\n"); //屏幕输出提示信息，提示一下程序是否执行正常。 
  return 0;
}

int main02(void)
{
  char s[1024] = { 0 };	
  FILE *p =	fopen("E:\\testwork\\b.txt", "w");  //用可写的方式打开一个文件  
  // “w ”意思就是如果文件不存在，就创建文件，如果文件存在就覆盖。 
  while(1)
  {
  	memset(s, 0, sizeof(s));
  	scanf("%s", s);
  	if (strcmp(s, "exit") == 0)
  	     break;  //如果用户输入的是exit，那么循环退出
	//加上换行
	int len = strlen(s);
	s[len] = '\n';	    
  	fputs(s, p);
  }
  fclose(p);  //关闭一个文件 
  //操作一个文件的步骤和把大象放冰箱是一样的。 
  
  printf("end\n"); //屏幕输出提示信息，提示一下程序是否执行正常。 
  return 0;
}


int main03(void)  //写文件 
{
  char s[1024] = { 0 };	
  FILE *p =	fopen("E:\\testwork\\b.txt", "w");  //用可写的方式打开一个文件  
  // “w ”意思就是如果文件不存在，就创建文件，如果文件存在就覆盖。 
  while(1)
  {
  	memset(s, 0, sizeof(s));
//  	scanf("%s", s);
    gets(s);
  	if (strcmp(s, "exit") == 0)
  	     break;  //如果用户输入的是exit，那么循环退出
	//加上换行
	int len = strlen(s);
	s[len] = '\n';	    
  	fputs(s, p);
  }
  fclose(p);  //关闭一个文件 
  //操作一个文件的步骤和把大象放冰箱是一样的。 
  
  printf("end\n"); //屏幕输出提示信息，提示一下程序是否执行正常。 
  return 0;
}

int main(void) //读文件 
{
    char s[1024] = { 0 };
	FILE *p = fopen("E:\\testwork\\mitanNew0423.txt", "r");  //用读的方式打开一个文件	
	//foef(p);   //如果已经到了文件结尾，函数返回真 
	while(!feof(p))   //如果没有到文件结尾，那么就一直循环
	{
		memset(s, 0, sizeof(s));
		fgets(s, sizeof(s), p);  //第一个参数是一个内存地址，第二个参数是这块内存的大小，第三个参数是fopen返回的文件指针 
        printf("%s", s);
	 } 
	fclose(p);
	return 0; 
}
