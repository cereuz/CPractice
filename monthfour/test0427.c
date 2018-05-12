#include <stdio.h>

/*
 * 打印三角形
 */

int main01() {
	int i;
	int j;
	for(i = 1; i < 10; i++) {
		for(j = 10; j > i ; j--) {
			printf(" ");
		}
		for(j = 1; j <= (i*2-1) ; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

/*
 * 有空格的三角形
 */
int main02() {
	int i;
	int j;
	int sum;
	scanf("%d",&sum);
	printf("\b\r\b%d\n\n",sum);
	for(i = 1; i <= sum; i++) {
		for(j = sum; j > i ; j--) {
			printf(" ");
		}
		for(j = 1; j <= i ; j++) {
			printf(" ");
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

/*
 * 打印倒三角形
 */

int main() {
	int i;
	int j;
	int in;
	scanf("%d",&in);
	int sum = (in+2)*3;
	
	for(i = 1; i <= sum/2 ; i++) {
		for(j = 1; j <= i ; j++) {
			printf(" ");
		}
		for(j = sum/2; j >= (i * 2 - 1) ; j--) {
			printf("*");
		}

		printf("\n");  
	}
}

