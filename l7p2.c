#include<stdio.h>
#include<ctype.h>
#define MAX 100

char stack[MAX];
int top = -1;

void push(char val)
{
	if(top >= MAX-1)
	{
		printf("\nStack Overflow.");
	}
	else
	{
		top++;
		stack[top]=val;
	}
}

