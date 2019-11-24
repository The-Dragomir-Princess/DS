#include<stdio.h>
void mat_enter(int matrix[50][50], int row, int col)
{
	int i,j;
	printf("Please enter elements of matrix:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("a%d%d:",i+1,j+1);
			scanf("%d",&matrix[i][j]);
		}
	}
}

void display_unsorted(int matrix[50][50], int row, int col)
{
	int i,j;
	printf("\nUnsorted matrix:\n");
	for(i = 0; i < row;i++)
	{
		for(j = 0; j < col; j++)
		{
			printf("%d  ", matrix[i][j]);
			if(j == col - 1)
				printf("\n\n");
		}
	}
}

void sort(int matrix[50][50], int row, int col)
{
	int i,j,x,k;
	
	
	for(i = 0; i < row;i++)
	{
		for(j = 0; j < col; j++)
		{
			for(k = 0; k < col; k++)
			{
				if(matrix[i][j]<matrix[i][k])
				{
					x=matrix[i][j];
					matrix[i][j]=matrix[i][k];
					matrix[i][k]=x;
					
				}
			}	
		}
	}
	printf("\nSorted matrix:\n");
	for(i = 0; i < row;i++)
	{
		for(j = 0; j < col; j++)
		{	
		printf("%d \t ", matrix[i][j]);
			if(j == col - 1)
				printf("\n\n");
		}
	}
	
}


void main()
{
	int mat[50][50],r,c;
	printf("Enter number of rows and columns:\n");
	scanf("%d %d",&r,&c);
	mat_enter(mat,r,c);
	display_unsorted(mat,r,c);
	sort(mat,r,c);
	
}











			
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
