#include <stdio.h>

void printf_array(int s[])
{
	int i;
	for(i = 0; i < 10; i++)   //��ӡ�����Աֵ 
	{
		printf("%d, ", s[i]);
	 } 
	 printf("\n");
}


int main(void)
{
	int buf[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int *p = buf;
	printf("%d, %d, %d, %d\n", *p, buf[0], &buf, &buf[1]);
	printf("%d, %d, %d\n", sizeof(*p), sizeof(buf), sizeof(p));
	
	//����һ
	*(p + 3) = 20; //���������±�Ϊ3�ĳ�Ա��ֵ
	//������
	p[5] = 30; //���������±�Ϊ5�ĳ�Ա��ֵ
	//������
	p += 7;
	*p = 40; //���������±�Ϊ7�ĳ�Ա��ֵ
	printf_array(buf);  //��ӡ���� 
	//����һ�ͷ�������û�иı�pָ����ڴ��ַ�����������޸���pָ���ֵ
	
	p[2] = 100;  //���ʱ���޸ĵ����±�Ϊ 9 �������Ա �� 7 +  2 = 9 �� 
	printf_array(buf);  //��ӡ���� 
	
	p[1] = 300;
	printf_array(buf);  //��ӡ���� 	
}
