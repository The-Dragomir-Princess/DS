#include<stdio.h>
 
int linear_search(int a[],int x, int size)
{
	int j;
	
	for(j=0;j<size;j++)
		if(a[j]==x)
			return j;
		else
			return 1;
}

void main()
{
	int arr[100],num,n,i;
	printf("Enter the number of elements in array:\n");
	scanf("%d",&n);
	printf("Enter the elements:\n");
 	for(i=0;i<n;i++)
	{
		printf("%d)",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Enter number to be searched:");
	scanf("%d",&num);
	int search= linear_search(arr,num,n);
	if(search!=1)
	
		printf("Element %d is present at position %d",num,search+1);
	else
		printf("Element not found");
}
