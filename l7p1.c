#include<stdio.h>
#define MAX 10
int s[MAX];
int top=-1;

int Push(int val)
{
	if(top==MAX-1)
	{
		printf("\nOverflow\n");
		return MAX;
	}
	top++;
	s[top]=val;
}

int Pop()
{
	if(top==-1)
	{
		printf("\nUnderflow\n");
		return -1;
	}
	
	return s[top--];
}

void display()
{
	int i;
	printf("\n");
	for(i=0;i<MAX-1;i++)
		printf("%d ",s[i]);
	printf("\n");
}

void main()
{
	int option, x, i;
	
	while(1)
	{
		printf("Please choose an option:");
		printf("\n1. Display \n2.Insert \n 3.Delete \n Your option:");
		scanf("%d",&option);
		
		switch(option)
		{
			case 1: display();
					break;
			case 2: printf("Value to be pushed:");
					scanf("%d",&x);
					Push(x);
					break;
			case 3: Pop();
					break;
		}
	}
}
	
	
	
	
	
	
	
