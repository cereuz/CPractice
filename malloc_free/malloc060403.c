#include <stdio.h>

char *mystrcat(char *s1, char *s2)
{
	strcat(s1, s2);
	return s1;
}

char *test(char *(*p)(char *, char *), char *s1, char *s2)
{
	return p(s1, s2);
}

int main(void)
{
	char s1[100] = "Hello";
	char s2[100] = "world";
	char *s = mystrcat(s1, s2);
	char *ss = test(mystrcat, s1, s2);
	printf("s = %s\n", s);
	return 0;
}
