#include <stdio.h>

int main01() { //求数组中所有元素的和
	int array[10] = { 3, 6, 5, 7, 8, 2, 21, 16, 9, 1};
	int i;
	int sum = 0;  //存放数组和的变量
	for (i = 0; i < 10; i++) {
		sum += array[i];
	}
	printf("数组的和为：%d\n", sum);
	float avg = (float)sum/10;
	printf("数组平均值为：%f\n", avg);

	for(i = 0; i < 10; i++) {
		if(sum/10 > array[i]) {
			printf("值小于平均值的数是第 %d 个，值为： %d\n", i , array[i]);
		}
	}
}

int main02() {     //数组逆序
	int array[10] = { 3, 6, 5, 7, 8, 2, 21, 16, 9, 1};
	int i;
	int temp;
	for(i = 0; i < 10/2 ; i++) {
		temp = array[i];
		array[i] = array[10-i-1];
		array[10-i-1] = temp;
	}
	for(i = 0; i < 10; i++) {
		printf("%d  ",array[i]);
	}
}

int main03() { //求 100到999之间的水仙花数
	int i;
	int i1;
	int i2;
	int i3;
	for(i = 100; i < 999; i++) {
		i1 = i / 100;  //算出百位数
		i2 = i / 10 % 10;  //算出十位数
		i3 = i % 10;  //算出个位数
		if((i1*i1*i1 + i2*i2*i2 + i3*i3*i3) == i) {
			printf("%d\n",i);
		}
	}
}

int main() { //求素数  .素数是除了1和自身以外，不能被其他整数整除的整数
	int i;
	for(i = 3; i < 1000; i++) {
		int j;
		int status = 0;
		for(j = 2; j < i ; j++) {
			if((i % j) == 0) {
				status = 1;
			}
		}
		if(status == 0) {
			printf("%d\n", j);
		}
	}
}
