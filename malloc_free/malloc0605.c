#include <stdio.h>
#include <string.h>
/*
 *  1.  fopen
 *
 *
 */


int main01(void)
{
  FILE *p =	fopen("E:\\testwork\\a.txt", "w");  //�ÿ�д�ķ�ʽ��һ���ļ�  
  // ��w ����˼��������ļ������ڣ��ʹ����ļ�������ļ����ھ͸��ǡ� 
  fputs("1. Hello World ���!", p);//���ļ�д��һ���ַ��� 
  fputs("\n2. Hello World ���!", p);//���ļ�д��һ���ַ��� 
  fputs("\n3. Hello World ���!", p);//���ļ�д��һ���ַ��� 
  fputs("\n4. Hello World ���!", p);//���ļ�д��һ���ַ��� 
  fclose(p);  //�ر�һ���ļ� 
  //����һ���ļ��Ĳ���ͰѴ���ű�����һ���ġ� 
  
  printf("end\n"); //��Ļ�����ʾ��Ϣ����ʾһ�³����Ƿ�ִ�������� 
  return 0;
}

int main02(void)
{
  char s[1024] = { 0 };	
  FILE *p =	fopen("E:\\testwork\\b.txt", "w");  //�ÿ�д�ķ�ʽ��һ���ļ�  
  // ��w ����˼��������ļ������ڣ��ʹ����ļ�������ļ����ھ͸��ǡ� 
  while(1)
  {
  	memset(s, 0, sizeof(s));
  	scanf("%s", s);
  	if (strcmp(s, "exit") == 0)
  	     break;  //����û��������exit����ôѭ���˳�
	//���ϻ���
	int len = strlen(s);
	s[len] = '\n';	    
  	fputs(s, p);
  }
  fclose(p);  //�ر�һ���ļ� 
  //����һ���ļ��Ĳ���ͰѴ���ű�����һ���ġ� 
  
  printf("end\n"); //��Ļ�����ʾ��Ϣ����ʾһ�³����Ƿ�ִ�������� 
  return 0;
}


int main(void)
{
  char s[1024] = { 0 };	
  FILE *p =	fopen("E:\\testwork\\b.txt", "w");  //�ÿ�д�ķ�ʽ��һ���ļ�  
  // ��w ����˼��������ļ������ڣ��ʹ����ļ�������ļ����ھ͸��ǡ� 
  while(1)
  {
  	memset(s, 0, sizeof(s));
//  	scanf("%s", s);
    gets(s);
  	if (strcmp(s, "exit") == 0)
  	     break;  //����û��������exit����ôѭ���˳�
	//���ϻ���
	int len = strlen(s);
	s[len] = '\n';	    
  	fputs(s, p);
  }
  fclose(p);  //�ر�һ���ļ� 
  //����һ���ļ��Ĳ���ͰѴ���ű�����һ���ġ� 
  
  printf("end\n"); //��Ļ�����ʾ��Ϣ����ʾһ�³����Ƿ�ִ�������� 
  return 0;
}
