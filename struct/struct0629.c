#include <stdio.h>
#include <stdlib.h>

struct list
{
	int data;  //������
	struct list *next;   //ָ���� 
};

struct list *create_list()   //����һ���ڵ� 
{
	return calloc(sizeof(struct list), 1);
}; 
 
void traverse(struct list *ls)  //ѭ����������
{
	struct list *p = ls;
	while(p)
	{
		printf("%d\n", p->data);
		p = p->next;   //pָ������Ӧ����һ���ڵ� 
	}
 } 
 
struct list *insert_list(struct list *ls, int n, int data)  //��ָ��λ�ò���Ԫ��
{
	struct list *p = ls;
	while(p && n--)
	{
		p = p->next;
	}
	
	if(p == NULL)
	{
		return NULL; //n��λ�ô�������ڵ��� 
	}
	
	struct list *node = create_list();  //�½���һ���ڵ�
	node->data = data;
	node->next = p->next;
	p->next = node;
	
	return node; 
} 

int delete_list(struct list *ls, int n)  //ɾ��ָ��λ�õ�Ԫ��
{
	struct list *p = ls;
	while(p && n--)
	{
		p = p->next;
    }
    
    if(p == NULL)
    {
    	return -1; //n��λ�ò����� 
	}
	
	struct list *temp = p->next;
    p->next = p->next->next;
    free(temp);
		
	return 0;	
} 


int main01(void)
{
	struct list *first = calloc(sizeof(struct list), 1);   //�ڶ��м䴴��һ���ڵ� 
	struct list *second = calloc(sizeof(struct list), 1);  //�ڶ��м䴴��һ���ڵ�
	struct list *third = calloc(sizeof(struct list), 1);   //�ڶ��м䴴��һ���ڵ�
	
	first->next = second;
	second->next = third;
	third->next = NULL;
	first->data = 1;
	second->data = 2;
	third->data = 3;
	
	printf("Hello World ��\n");
	return 0;
}

int main02(void)
{
	struct list *first = create_list();   //�ڶ��м䴴��һ���ڵ� 
	struct list *second = create_list();  //�ڶ��м䴴��һ���ڵ�
	struct list *third = create_list();   //�ڶ��м䴴��һ���ڵ�
	
	first->next = second;
	second->next = third;
	third->next = NULL;   //������������һ���ڵ㣬next��һ��ΪNULL ; 
	first->data = 1;
	second->data = 2;
	third->data = 3;
	
	traverse(first);
	return 0;
}

int main(void)
{
	struct list *first = create_list();   //�ڶ��м䴴��һ���ڵ� 
	struct list *second = create_list();  //�ڶ��м䴴��һ���ڵ�
	struct list *third = create_list();   //�ڶ��м䴴��һ���ڵ�
	
	first->next = second;
	second->next = third;
	third->next = NULL;   //������������һ���ڵ㣬next��һ��ΪNULL ; 
	first->data = 1;
	second->data = 2;
	third->data = 3;
	
	insert_list(first, 1, 10);
	insert_list(first, 1, 20);
	insert_list(first, 1, 30);
	insert_list(first, 1, 40);
	traverse(first);
	printf("------------------------\n");
	
	delete_list(first, 6);	
	traverse(first);
	return 0;
}
