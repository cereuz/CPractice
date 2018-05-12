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
	 for(i = 0; i < 10; i++)
	 {
	 	*p = i * 10;
	 	p++;
	 }
	 printf("---------------\n");
	 printArray(buf);	 
}

int main(void)
{
	int a = 0x12345678;
	char *p = &a;
	p++;
	printf("%x\n", *p);
	return 0;
}

