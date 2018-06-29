#include <stdio.h>
#include <stdlib.h>

struct list
{
	int data;  //数据域
	struct list *next;   //指针域 
};

struct list *create_list()   //建立一个节点 
{
	return calloc(sizeof(struct list), 1);
}; 
 
void traverse(struct list *ls)  //循环遍历链表
{
	struct list *p = ls;
	while(p)
	{
		printf("%d\n", p->data);
		p = p->next;   //p指向它对应的下一个节点 
	}
 } 
 
struct list *insert_list(struct list *ls, int n, int data)  //在指定位置插入元素
{
	struct list *p = ls;
	while(p && n--)
	{
		p = p->next;
	}
	
	if(p == NULL)
	{
		return NULL; //n的位置大于链表节点数 
	}
	
	struct list *node = create_list();  //新建立一个节点
	node->data = data;
	node->next = p->next;
	p->next = node;
	
	return node; 
} 

int delete_list(struct list *ls, int n)  //删除指定位置的元素
{
	struct list *p = ls;
	while(p && n--)
	{
		p = p->next;
    }
    
    if(p == NULL)
    {
    	return -1; //n的位置不合适 
	}
	
	struct list *temp = p->next;
    p->next = p->next->next;
    free(temp);
		
	return 0;	
} 


int main01(void)
{
	struct list *first = calloc(sizeof(struct list), 1);   //在堆中间创建一个节点 
	struct list *second = calloc(sizeof(struct list), 1);  //在堆中间创建一个节点
	struct list *third = calloc(sizeof(struct list), 1);   //在堆中间创建一个节点
	
	first->next = second;
	second->next = third;
	third->next = NULL;
	first->data = 1;
	second->data = 2;
	third->data = 3;
	
	printf("Hello World ！\n");
	return 0;
}

int main02(void)
{
	struct list *first = create_list();   //在堆中间创建一个节点 
	struct list *second = create_list();  //在堆中间创建一个节点
	struct list *third = create_list();   //在堆中间创建一个节点
	
	first->next = second;
	second->next = third;
	third->next = NULL;   //对于链表的最后一个节点，next域一定为NULL ; 
	first->data = 1;
	second->data = 2;
	third->data = 3;
	
	traverse(first);
	return 0;
}

int main(void)
{
	struct list *first = create_list();   //在堆中间创建一个节点 
	struct list *second = create_list();  //在堆中间创建一个节点
	struct list *third = create_list();   //在堆中间创建一个节点
	
	first->next = second;
	second->next = third;
	third->next = NULL;   //对于链表的最后一个节点，next域一定为NULL ; 
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
