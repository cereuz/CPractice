#include <stdio.h>

//  su
//  ps -u root
//  cd /
//  cd proc
//  cd 3192 
//  ls
//  cat maps

//  KernelPageSize:        4 kB

//  196    164  

//  �ѵķ�����ͷ�
//  ����ϵͳ�ڹ����ڴ��ʱ����С��λ�����ֽڣ������ڴ�ҳ��  4k 

int main(void)
{
	char *p = malloc(1024 * 65);
	int i = 0;
	getchar();
	free(p);
	
	while(1)   //����  Windowsϵͳ���ڴ���䣬�ڴ�ҳ��С ��  4k   
	{
		int *p1 = malloc(1024 * 2);
		getchar();
	 } 
	
	return 0;
}
