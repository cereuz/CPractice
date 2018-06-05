#include <stdio.h>

typedef char BYTE;  //定义了一个新的数据类型，名字叫BYTE，类型为char  
#define BYTE1 char  //这里是语法替换，预编译的时候就会替换回char
#define MAX 10 
typedef long ZLONG;
typedef unsigned int UINT;
typedef char ZCHAR;
typedef unsigned char UCHAR;
typedef short TSHORT; 


struct abc
{
	int a;
	char b;
};

typedef struct abc A;

typedef struct
{
	int a;
} A2;

int main(void)
{
	BYTE a;
	a = 129; 
	
	A2 c;
	
	BYTE1 b = 129;
	printf("a = %d, b = %d, c = %d\n", a, b, c);
	return 0;
}
