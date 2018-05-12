#include <stdio.h>

int main()
{
	char buf[100] = "你好，世界";
	char buf2[100] = "Hello,World";
	printf("%d\n", buf[0]);  
	printf("%d\n", buf2[0]);  
}


int main02()   //字符串逆序 
{
	char buf[100] = "Hello, World"; 
	printf(buf); //打印字符串
	printf("\n");
	printf("%p\n",buf);  //打印字符串的地址 
	printf("\n");
	int len = 0;
	while(buf[len++]);
		len--;    //字符串都是以0结尾，所以需要减一位。 
		printf("%d\n",len);
		
	//字符串逆序
	int min = 0;
	int max = len - 1;
	while(min < max){
		char temp = buf[min];
		buf[min] = buf[max];
		buf[max] = temp;
		min++;
		max--;
	}
	printf("%s\n",buf);	
		return 0;
}


int main01()      //中文逆序 
{
	char buf[100] = "你好, 世界";
	printf(buf); //打印字符串
	printf("\n");
	printf("%p\n",buf);  //打印字符串的地址 
	printf("\n");
	int len = 0;
	while(buf[len++]);
		len--;    //字符串都是以0结尾，所以需要减一位。 
		printf("%d\n",len);
		
	//字符串逆序
	int min = 0;
	int max = len - 1;
	while(min < max){
		char temp = buf[min];
		buf[min] = buf[max-1];
		buf[max-1] = temp;
		
		temp = buf[min + 1];
		buf[min + 1] = buf[max];
		buf[max] = temp;
		
		min +=2;
		max -=2;
	}
	printf("%s\n",buf);	
		return 0;
}
