/*
使用转义字符时需要注意以下问题：
1)转义字符中只能使用小写字母，每个转义字符只能看作一个字符。
2)\v垂直制表和\f换页符对屏幕没有任何影响，但会影响打印机执行响应操作。
3)在C程序中，使用不可打印字符时，通常用转义字符表示。
4)转义字符'\0’表示空字符NULL，它的值是0。而字符'0'的ASCII码值是48。因此，空字符'\0’不是字符0。另外，空字符不等于空格字符，空格字符的ASCII码值为32而不是0。编程序时，读者应当区别清楚。
5) 如果反斜线之后的字符和它不构成转义字符，则'\’不起转义作用将被忽略。
清屏需要使用清屏函数system("cls");头文件是stdlib.h

*/

#include <stdio.h>

int main01()
{
	int i = 0;
	while(1)
	{
		printf("Please input i : ");
		scanf("%d", &i);
		if(i == 9)
		  continue;   // continue会导致循环语句直接回到循环的开始
		if(i == 6)
		  break;      //break会导致循环终断，退出循环   
		printf("i = %d\n", i);
	}
 } 
 
 int main02(){
 	int i = 0;
 	do{
 		printf("Please input i : ");
 		scanf("%d",&i);
 		printf("i = %d\n",i);
	 }
	 while(i);
 }
 
 int main03(){
 	int i = 0;
 	for( i = 1 ; i < 10 ; i++){
 		printf("%d : Hello World !\n",i);
	 }
 }
 
 int main04(){
 	int i = 0;
 	int j;
 	scanf("%d",&j);
 	while(i < j){
 		printf("%d : Hello World！\n",i);
 		i++;
	 }
 }
 
 int main(){
 	printf("+++++"); 	
 	printf("\n");  //换行符号
 	printf("*********************");
	printf("\r");  // 回车键 
	printf("-----++&&");
	printf("\b"); 
	printf("++\t+++\n");
	printf("\f\n");
	printf("@@@\t@@@@\t@@\t@@@@@@\n"); 
	printf("\?\n");
	printf("\"\n");
	printf("\'\n");
	printf("\\\t\\\t\;\t\:\t\m");
 }
 
