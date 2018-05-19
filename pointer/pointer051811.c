#include <stdio.h>

/*
 *  指向函数的指针：在回调函数和运行期动态绑定的时候，大量的用到了指向函数的指针 
 *   
 *  * 把 指向函数的指针作为函数的参数。
 *       将函数指针作为另一个函数的参数，称为回调函数 
 */

void man(void)
{
	printf("抽烟\n");
	printf("喝酒\n");
	printf("打牌\n");
}

void woman(void)
{
	printf("化妆\n");
	printf("逛街\n");
	printf("网购\n");
}


int main(void)
{
    void(*p)();   //定义一个指向 没有参数，没有返回值的指向函数的指针 。定义一个指向函数的指针，该函数没有参数，没有返回值
	int i = 0;
	scanf("%d", &i);
	if (i == 0)
	    p = man;
	else 
	    p = woman;
	p();  // 这段代码是程序运行的时候才能决定调用哪个函数 
	
	return 0;			
}
