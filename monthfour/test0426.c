/*
ʹ��ת���ַ�ʱ��Ҫע���������⣺
1)ת���ַ���ֻ��ʹ��Сд��ĸ��ÿ��ת���ַ�ֻ�ܿ���һ���ַ���
2)\v��ֱ�Ʊ��\f��ҳ������Ļû���κ�Ӱ�죬����Ӱ���ӡ��ִ����Ӧ������
3)��C�����У�ʹ�ò��ɴ�ӡ�ַ�ʱ��ͨ����ת���ַ���ʾ��
4)ת���ַ�'\0����ʾ���ַ�NULL������ֵ��0�����ַ�'0'��ASCII��ֵ��48����ˣ����ַ�'\0�������ַ�0�����⣬���ַ������ڿո��ַ����ո��ַ���ASCII��ֵΪ32������0�������ʱ������Ӧ�����������
5) �����б��֮����ַ�����������ת���ַ�����'\������ת�����ý������ԡ�
������Ҫʹ����������system("cls");ͷ�ļ���stdlib.h

*/

#include <stdio.h>

int main01()
{
	int i = 0;
	while(1)
	{
		printf("Please input i : ");
		scanf("%d", &i);
		if(i == 9)
		  continue;   // continue�ᵼ��ѭ�����ֱ�ӻص�ѭ���Ŀ�ʼ
		if(i == 6)
		  break;      //break�ᵼ��ѭ���նϣ��˳�ѭ��   
		printf("i = %d\n", i);
	}
 } 
 
 int main02(){
 	int i = 0;
 	do{
 		printf("Please input i : ");
 		scanf("%d",&i);
 		printf("i = %d\n",i);
	 }
	 while(i);
 }
 
 int main03(){
 	int i = 0;
 	for( i = 1 ; i < 10 ; i++){
 		printf("%d : Hello World !\n",i);
	 }
 }
 
 int main04(){
 	int i = 0;
 	int j;
 	scanf("%d",&j);
 	while(i < j){
 		printf("%d : Hello World��\n",i);
 		i++;
	 }
 }
 
 int main(){
 	printf("+++++"); 	
 	printf("\n");  //���з���
 	printf("*********************");
	printf("\r");  // �س��� 
	printf("-----++&&");
	printf("\b"); 
	printf("++\t+++\n");
	printf("\f\n");
	printf("@@@\t@@@@\t@@\t@@@@@@\n"); 
	printf("\?\n");
	printf("\"\n");
	printf("\'\n");
	printf("\\\t\\\t\;\t\:\t\m");
 }
 
