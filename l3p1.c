#include<stdio.h>

void mat_enter(int matrix1[20][20], int matrix2[20][20], int row1, int col1, int row2, int col2)
{
	int i,j;
	printf("Enter elements of first matrix:\n");
	for(i = 0; i < row1; i++)
	{
		for(j = 0; j < col1; j++)
		{
			printf("Enter elements a%d%d: ", i + 1, j + 1);
			scanf("%d", &matrix1[i][j]);
		}
	}
	printf("\nEnter elements of second matrix :\n");
	for(i = 0; i < row2; i++)
	{
		for(j = 0; j < col2; j++)
		{
			printf("Enter elements b%d%d: ", i + 1, j + 1);
			scanf("%d", &matrix2[i][j]);
		}
	}
	
}

void mat_multiply(int matrix1[20][20], int matrix2[20][20], int row1, int col1, int row2, int col2,int matrix3[20][20])
{
	int i, j, k;
	
	for(i = 0; i < row1; i++)
	{
		for(j = 0; j < col2; j++)
		{
			matrix3[i][j] = 0;
		}
	}
	
	for(i = 0; i < row1; i++)
	{
		for(j = 0; j < col2; j++)
		{
			for(k=0; k<col1; k++)
			{
				matrix3[i][j] += matrix1[i][k] * matrix2[k][j];
			}
		}
	}
}

void mat_show(int matrix3[20][20], int row1, int col2)
{
	int i, j;
	printf("\nFinal matrix:\n");
	for(i = 0; i < row1; i++)
	{
		for(j = 0; j < col2; j++)
		{
			printf("%d  ", matrix3[i][j]);
			if(j == col2 - 1)
				printf("\n\n");
		}
	}
}

void main()
{
	int mat1[20][20], mat2[20][20], mat3[20][20], r1, c1, r2, c2, i, j, k;
	printf("Enter rows and column for first matrix: ");
	scanf("%d %d", &r1, &c1);
	printf("Enter rows and column for second matrix: ");
	scanf("%d %d", &r2, &c2);
	
	while (c1!= r2)
	{
		printf("Error: No of columns of matrix 1 must be equal to no of rows of matrix 2\n");
		printf("Enter rows and column for first matrix: ");
		scanf("%d%d", &r1, &c1);
		printf("Enter rows and column for second matrix: ");
		scanf("%d%d", &r2, &c2);
	}
	
        mat_enter(mat1,mat2,r1,c1,r2,c2);
        mat_multiply(mat1,mat2,r1,c1,r2,c2,mat3);
        mat_show(mat3,r1,c2);
	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
		
		
