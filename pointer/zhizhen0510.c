int main01(void)   //ָ���ָ��ͬһ��ָ���ǿ���ָ��ͬ�ĵ�ַ�ġ�ָ������Ϳ�������Ӧ���޸ġ�ָ�Ĵ��ġ� 
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
 * ָ��֮�丳ֵ����ͨ�������͸�ֵ����Ϊ�ϸ����磺�����԰�һ��double*��ֵ��һ��int * 
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
