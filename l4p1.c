#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *next;
};
typedef struct node node;

void main()
{
	node* head=NULL;
	insert_beg(&head,16);
	insert_beg(&head,9);
	insert_last(&head,25);
	print_LL(&head);
	printf("\n");
}

int insert_beg(node* *h,int val)
{
	node* new_node;
	new_node=malloc(sizeof(node));
	if(new_node==NULL)
		printf("Overflow");
	new_node->info=val;
	new_node->next=NULL;
	
	new_node->next=*h;
	*h=new_node;
}

int insert_last(node* *h, int val)
{
	node* ptr;
	node* new_node;
	new_node=malloc(sizeof(node));
	if(new_node==NULL)
	{
		printf("Overflow");
		
	}
	new_node->info=val;
	new_node->next=NULL;
	
	if(*h==NULL)
	{
		new_node->next=*h;
		*h=new_node;
	}
	else
	{
		ptr=*h;
		while(ptr->next!=NULL)
			ptr=ptr->next;
		ptr->next=new_node;
	}
}

int print_LL(node* *h)
{
	node* ptr;
	ptr=*h;
	while(ptr!=NULL)
	{
		printf("%d\t",ptr->info);
		ptr=ptr->next;
	}
}
	
	
	
	
