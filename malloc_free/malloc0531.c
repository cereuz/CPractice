#include <stdio.h>

//  su
//  ps -u root
//  cd /
//  cd proc
//  cd 3192 
//  ls
//  cat maps

//  196    164  

int main(void)
{
	char *p = malloc(1024 * 65);
	int i = 0;
	getchar();
	free(p);
	return 0;
}
