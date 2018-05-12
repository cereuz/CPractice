#include <stdio.h>

int main(void) {
	
	int a;
	int b;
	char c;

	printf("please input a : ");
	scanf("%d",&a);    //输入第一个数

    goto end;//无条件的跳转到一个标号去执行 

	printf("please input operator : ");
	scanf("%s",&c);
	getchar();

	printf("please input b : ");
	scanf("%d",&b);   //输入第二个数

	switch (c) {
		case '+' :
			printf("a + b = %d\n", a + b);   //如果是 +  就做加法运算 
			break;
		case '-' :
			printf("a - b = %d\n", a - b);   //如果是 -  就做减法运算
			break;
		case '*' :
			printf("a * b = %d\n", a * b);   //如果是 × 就做乘法运算
			break;
		case '/' :
			switch(b){
				case 0 :
					printf("b = 0  can\`t be divided!" );  //除数不能为 0 
					break;
				default :
				  	printf("a / b = %d\n", a / b);   //如果是 /  就做除法运算
			}
			break;  
		default  :
		    printf("error!");		 
	}
	
			end: // 标号
			printf("end\n"); 
}
