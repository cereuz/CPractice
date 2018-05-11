int main01(void)   //指针的指向，同一个指针是可以指向不同的地址的。指向哪里就可以做对应的修改。指哪打哪。 
{
	int a = 2;
	int b = 4;
	int c = 9;
	
	int *p ;
	
	p = &a;
	*p = 10;
	
	p = &b;
	*p = 20;
	
	p = &c;
	*p = 30;
	
	printf("a = %d, b = %d, c = %d\n", a , b , c);
	return 0;
}


/*
 * 指针之间赋值比普通数据类型赋值检查更为严格，例如：不可以把一个double*赋值给一个int * 
 *
 */

int main(void)
{
	int a = 0x1310;
	char b = 2;
	
	int *p = &a;
	
	printf("*p = %x\n", *p);
	
	char buf[10] = { 0x12, 0x34, 0x56, 0x78, 0x99, 5, 6, 7, 8};
	p = buf;
	printf("p = %x\n", *p);
	return 0;
 } 
