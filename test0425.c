#include <stdio.h>

int main(void) {
	
	int a;
	int b;
	char c;

	printf("please input a : ");
	scanf("%d",&a);    //�����һ����

    goto end;//����������ת��һ�����ȥִ�� 

	printf("please input operator : ");
	scanf("%s",&c);
	getchar();

	printf("please input b : ");
	scanf("%d",&b);   //����ڶ�����

	switch (c) {
		case '+' :
			printf("a + b = %d\n", a + b);   //����� +  �����ӷ����� 
			break;
		case '-' :
			printf("a - b = %d\n", a - b);   //����� -  ������������
			break;
		case '*' :
			printf("a * b = %d\n", a * b);   //����� �� �����˷�����
			break;
		case '/' :
			switch(b){
				case 0 :
					printf("b = 0  can\`t be divided!" );  //��������Ϊ 0 
					break;
				default :
				  	printf("a / b = %d\n", a / b);   //����� /  ������������
			}
			break;  
		default  :
		    printf("error!");		 
	}
	
			end: // ���
			printf("end\n"); 
}
