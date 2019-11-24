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
	int x;
	node* head=NULL;
	insert_beg(&head,36);
	insert_beg(&head,25);
	insert_beg(&head,16);
	insert_beg(&head,9);
	insert_beg(&head,4);
	insert_beg(&head,1);
	printf("The original linked list was:\n");
	print_Og(&head);
	printf("\nAfter deletion the linked list is:\n");
	x=delete_beg(&head,head);
	
	if(x==-1)
	{
		printf("Underflow");
	    
	}
	if(x==1)
		print_Og(&head);
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

int print_Og(node* *h)
{
	node* ptr;
	ptr=*h;
	while(ptr!=NULL)
	{
		printf("%d\t",ptr->info);
		ptr=ptr->next;
	}
}

int delete_beg(node* *h, int*val)
{
	node*temp;
	node*start=*h;
	
	
	if(start==NULL)
		return -1;
	else
	{
		val=start->info;
		temp=start;
		start=start-> next;
		free(temp);
		*h=start;
		return 1;
	}
	
	
}
	
















