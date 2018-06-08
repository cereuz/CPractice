#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(int *a, int *b)   //����������ֵ 
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void pupple(int *p, int n)    //ð������ 
{
	int i;
	int j;
	for(i = 0; i < n; i++)
	{
		for(j = 1; j < n-i; j++)
		{
			if(p[j - 1] > p[j])
			{
				swap(&p[j - 1], &p[j]);
			}
		}
	}
}

void print_array(int *array, int index)
{
		//��ӡ���� 
	int i;  
	for(i = 0; i < index; i++)
	{
	   printf("%d\n", array[i]);	
	}
	
	return 0;
}

int main01(void)   //��������������˵��������Ч�� 
{
	int array[10] = { 3,5,2,7,8,4,1,9,6,3};
	pupple(array, 10);
	
	int i;
	for(i = 0; i < 10; i++)
	{
		printf("%d\n", array[i]);
	}
	
	return 0;
}

int main02(void)  //��ȡ����ӡ�ļ� 
{
	int array[10] = { 0 };
	char buf[100];
	
	FILE *p = fopen("E:\\testwork\\b.txt", "r");
	if (p == NULL)
	{
		printf("error\n");
	} 
	  else 
	{
	   while(!feof(p))   //���û�е����ļ���β����ôѭ������
	   {
	   memset(buf, 0, sizeof(buf));   //ÿ�ζ�ȡ�ļ�һ��֮ǰ�������buffer��ա�
	   fgets(buf, sizeof(buf), p);
	   printf("%s", buf);
	   } 
	   fclose(p);	
	}
}


int main03(void)   //��ջ�н���һ������ ���ļ��������� 
{
	int index = 0; //���Ǹ������� 
	int array[100] = { 0 };   //��������鷶Χ�ڵĿ����������С� 
	char buf[100];
	
	FILE *p = fopen("E:\\testwork\\c.txt", "r");
	if (p == NULL)
	{
		printf("error\n");
	} 
	  else 
	{
	   while(!feof(p))   //���û�е����ļ���β����ôѭ������
	   {
	   memset(buf, 0, sizeof(buf));   //ÿ�ζ�ȡ�ļ�һ��֮ǰ�������buffer��ա�
	   fgets(buf, sizeof(buf), p);
	   array[index] = atoi(buf);  //����ȡ����һ��ת��Ϊint������ֵ�������Ա 
       index++;  
//	   printf("%s", buf);
	   } 
	   fclose(p);	
	}
//	print_array(array, 10);
//	printf("----------------------------"); 
	pupple(array, index);//����������
//	print_array(array, 10);
	
	p = fopen("E:\\testwork\\c1.txt", "w"); //��д�ķ�ʽ��c.txt
	int i;
	for(i = 0; i < index; i++)
	{
	   memset(buf, 0, sizeof(buf));   //ÿ�ζ�ȡ�ļ�һ��֮ǰ�������buffer��ա�
	   sprintf(buf, "%d\n", array[i]);  //������ĳ�Աת�����ַ��� 
	   fputs(buf, p);	
	 } 
	 fclose(p);
	
	return 0;
}


int main(void)   //�ڶ��н���һ������ ���ļ��������� 
{
	int index = 0; //���Ǹ������� 
//	int array[100] = { 0 };   //ջ�е����飬��������鷶Χ�ڵĿ����������С� 
	char buf[100];
	
	FILE *p = fopen("E:\\testwork\\c.txt", "r"); //��һ�δ�c.txt �� ��Ҫ֪������ļ��ж����� 
	if (p == NULL)
	{
		printf("error\n");
	} 
	  else 
	{
	   while(!feof(p))   //���û�е����ļ���β����ôѭ�������� ��һ��ѭ����ʱ�򲢲���Ҫ�����ļ����ݣ�����Ҫͳ���ļ������� 
	   {
	   memset(buf, 0, sizeof(buf));   //ÿ�ζ�ȡ�ļ�һ��֮ǰ�������buffer��ա�
	   fgets(buf, sizeof(buf), p);
//	   array[index] = atoi(buf);  //����ȡ����һ��ת��Ϊint������ֵ�������Ա 
       index++;  
//	   printf("%s", buf);
	   } 
	   fclose(p);	
	   
	   //��Ҫ�ȼ�����ļ������������� 
	   int *array = calloc(sizeof(int), index);  //�ڶ��н���һ����̬���飬��̬����ĳ�Ա������c.txt�ļ�������һ���� 
       
       p = fopen("E:\\testwork\\c.txt", "r"); //��һ�δ�c.txt �� ��Ҫ֪������ļ��ж����� 
	   index = 0; //�������� 0  ���¿�ʼ 
	if (p == NULL)
	{
		printf("error\n");
	} 
	  else 
	{
	   while(!feof(p))   //���û�е����ļ���β����ôѭ������
	   {
	   memset(buf, 0, sizeof(buf));   //ÿ�ζ�ȡ�ļ�һ��֮ǰ�������buffer��ա�
	   fgets(buf, sizeof(buf), p);
	   array[index] = atoi(buf);  //����ȡ����һ��ת��Ϊint������ֵ�������Ա 
       index++;  
//	   printf("%s", buf);
	   } 
	   fclose(p);	
	}
//	print_array(array, 10);
//	printf("----------------------------"); 
	pupple(array, index);//����������
//	print_array(array, 10);
	
	p = fopen("E:\\testwork\\c1.txt", "w"); //��д�ķ�ʽ��c.txt
	int i;
	for(i = 0; i < index; i++)
	{
	   memset(buf, 0, sizeof(buf));   //ÿ�ζ�ȡ�ļ�һ��֮ǰ�������buffer��ա�
	   sprintf(buf, "%d\n", array[i]);  //������ĳ�Աת�����ַ��� 
	   fputs(buf, p);	
	 } 
	 fclose(p);
	
	return 0;
}
}
