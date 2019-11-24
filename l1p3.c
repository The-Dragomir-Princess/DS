#include<stdio.h>
int binary_search(int a[],int lower, int upper, int num)
{
	int i,mid;
	
			mid=1+(upper-lower)/2;
	
		
		if(a[mid]==num)
			return mid;
		if(a[mid]>num)
			return binary_search(a,lower,mid-1,num);
		if(a[mid]<num)
			return binary_search(a,mid+1,upper,num);
		else
			return 1;
}
	void main()
	{
		int arr[100],x,n,j;
		printf("Enter the number of elements in array:\n");
		scanf("%d",&n);
		printf("Enter the elements:\n");
	 	for(j=0;j<n;j++)
		{
			printf("%d)",j+1);
			scanf("%d",&arr[j]);
		}
		printf("Enter number to be searched:");
		scanf("%d",&x);
		int search= binary_search(arr,0,n,x);
		if(search!=1)
		
			printf("Element %d is present at position %d",x,search+1);
		else
			printf("Element not found");
	}
