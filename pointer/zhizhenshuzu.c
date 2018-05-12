#include <stdio.h>

void printArray(char s[])
{
	int i;
	for(i = 0; i < 6; i++)
	{
		printf("s[%d] = %d,  ", i, s[i]);
	}
	printf("\n");
	
	return ;
 } 

int main01(void)
{
	char buf[10] = {1, 2, 3, 4, 5};
	char *p = buf;
	char *p0 = &buf[0];
	char *p1 = &buf[1];
	char *p2 = &buf[2];
	
//	*p1 = 9;
	
	p2 += 1;
	*p2 = 100;  
	printf("p = %d, p0 = %d, p1 = %d, p2 = %d\n", p, p0, p1, p2);
	printf("*p = %d, *p0 = %d, *p1 = %d, *p2 = %d\n", *p, *p0, *p1, *p2);
	printArray(buf);
	
	p2 -= 2;
	*p2 = 70;
	printf("---------------\n");
	printf("p = %d, p0 = %d, p1 = %d, p2 = %d\n", p, p0, p1, p2);
	printf("*p = %d, *p0 = %d, *p1 = %d, *p2 = %d\n", *p, *p0, *p1, *p2);
	printArray(buf);
	
	*p = 10;
	p++;
	*p = 20;
	p++;
	*p = 30;
	p++;
	*p = 40;
	p++;
	printf("---------------\n");
	printArray(buf);

	int i;
	p -= 4; 
	for(i = 2; i < 10 ; i++)
	 {
	 	*p = i;
	 	p++;
	 }
	 printf("---------------\n");
	 printArray(buf);
	 
	 // p已经指向了数组的最后一个成员了。后边没有可用地址了
	 p = buf;  //将p的值查询指向了数组的首地址。  也可以使用   p -= 10; 
//	 p -= 10; 
	 for(i = 0; i < 10; i++)       //使用指针给数组赋值 
	 {
	 	*p = i * 10;
	 	p++;
	 }
	 printf("---------------\n");
	 printArray(buf);	 
}

void s2ip(int n)   //从int字节转换为IP地址 
{
	unsigned char *p = &n;
	printf("%u.%u.%u.%u\n", *p, *(p+1), *(p+2), *(p+3));
}

int ip2sTest(char s[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	
	sscanf(s, "%d.%d.%d.%d", &a, &b, &c, &d);
	printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);
	return 0;
}

int ip2s(char s[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	
	sscanf(s, "%d.%d.%d.%d", &a, &b, &c, &d);
 //	printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);
    
    int ip = 0;
    char *p = &ip;
    *p = a;
    p++;
    *p = b;
    p++;
    *p = c;
    p++;
    *p = d;
    return ip;
}


int main(void)   // IP地址的保存方法 
{
//	"192.168.6.120"
//	"234.213.222.231"
	//IP在网络中传递的时候是一个DWORD，就是一个int 
	int a = 0x12345678;
	char *p = &a;
	p++;
	p++;
	printf("%x\n", *p);
	
	//"192.168.6.252"   //打印字符串 
	int ip = 0;
	unsigned char *pointer = &ip;
	*pointer = 192;
	pointer++;
	*pointer = 168;
	pointer++;
	*pointer = 6;
	pointer++;
	*pointer = 215;
	
	printf("*pointer = %d\n", *pointer);
	printf("pointer = %d\n", pointer);
	printf("ip = %d\n", ip);
	s2ip(ip);
	
	char s[100] = "192.168.8.215";
	int my_ip = ip2s(s); 
	s2ip(my_ip);
	return 0;
}

