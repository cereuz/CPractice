#include <stdio.h>

int main01() { //������������Ԫ�صĺ�
	int array[10] = { 3, 6, 5, 7, 8, 2, 21, 16, 9, 1};
	int i;
	int sum = 0;  //�������͵ı���
	for (i = 0; i < 10; i++) {
		sum += array[i];
	}
	printf("����ĺ�Ϊ��%d\n", sum);
	float avg = (float)sum/10;
	printf("����ƽ��ֵΪ��%f\n", avg);

	for(i = 0; i < 10; i++) {
		if(sum/10 > array[i]) {
			printf("ֵС��ƽ��ֵ�����ǵ� %d ����ֵΪ�� %d\n", i , array[i]);
		}
	}
}

int main02() {     //��������
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

int main03() { //�� 100��999֮���ˮ�ɻ���
	int i;
	int i1;
	int i2;
	int i3;
	for(i = 100; i < 999; i++) {
		i1 = i / 100;  //�����λ��
		i2 = i / 10 % 10;  //���ʮλ��
		i3 = i % 10;  //�����λ��
		if((i1*i1*i1 + i2*i2*i2 + i3*i3*i3) == i) {
			printf("%d\n",i);
		}
	}
}

int main() { //������  .�����ǳ���1���������⣬���ܱ�������������������
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
