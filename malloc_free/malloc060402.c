#include <stdio.h>

typedef char BYTE;  //������һ���µ��������ͣ����ֽ�BYTE������Ϊchar  
#define BYTE1 char  //�������﷨�滻��Ԥ�����ʱ��ͻ��滻��char
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
