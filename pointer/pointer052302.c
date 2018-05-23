#include <stdio.h>

int main(int argc, char *args[])
{
	if(argc < 4)
	{
		printf("参数不足，程序退出！\n");
		return 0;
	}
	
	int a = atoi(args[1]);
	int b = atoi(args[3]);
	
	// char *s = args[2];
	// char c = s[0];
	//	switch(c)
	
	switch (args[2][0])
	{
		case '+':
			printf("%d\n", a + b);
			break;
		
		case '-':
		    printf("%d\n", a - b);	
		    break;
		    
		case '*':
	    	printf("%d\n", a * b);
			break;
		
		case '/':
		    printf("%d\n", a / b);    
		    break;
	}
	return 0;
}
