#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node *prev;
	int info;
	struct node *next;
};
typedef struct node node;

void insert_last(node* *h, int val,node**l)
{
	node* ptr;
	
	node* new_node;
	new_node=malloc(sizeof(node));
	if(new_node==NULL)
	{
		printf("Overflow");return;
		
	}
	new_node->prev=NULL;
	new_node->info=val;
	new_node->next=NULL;
	
	
	if(*h==NULL)
	{
		//(*h)->prev=new_node;
		//new_node->next=*h;
		*l=*h=new_node;
	}
	else
	{
		ptr=*h;
		
		while(ptr->next!=NULL)
			ptr=ptr->next;
		ptr->next=new_node;
		new_node->prev=ptr;
		(*l)=new_node;
		
	}
}


void  insert_beg(node* *h,int val, node **l)
{
	node* new_node;
	new_node=malloc(sizeof(node));
	if(new_node==NULL)
		printf("Overflow");
	new_node->prev=NULL;
	new_node->info=val;
	new_node->next=NULL;
	
	if(*h==NULL)
	{
		//(*h)->prev=new_node;
		//new_node->next=*h;
		*l=*h=new_node;
	}
	else
	{
		(*h)->prev=new_node;
		new_node->next=*h;
		*h=new_node;
		}
	
}


void print_forward(node* *h)
{
	node* ptr;
	ptr=*h;
	while(ptr!=NULL)
	{
		printf("%d\t",ptr->info);
		ptr=ptr->next;
	}
}

void print_backward(node* *l)
{
	node* ptr;
	ptr=*l;
	while(ptr!=NULL)
	{
		printf("%d\t",ptr->info);
		ptr=ptr->prev;
	}
}
void main()
{
	node* tail=NULL;
	node* head=NULL;
	insert_beg(&head,16,&tail);
	insert_beg(&head,9,&tail);
	insert_beg(&head,4,&tail);
	insert_beg(&head,1,&tail);
	insert_last(&head,25,&tail);
	print_forward(&head);
	printf("\n");
	print_backward(&tail);
	printf("\n");
}


