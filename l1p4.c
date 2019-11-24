#include<stdio.h>
int max(int a[],int size)
{
	int i;
	int largest=0;
	for(i=0;i<size;i++)
	{
		if(largest<a[i])
			largest=a[i];
	}
		return largest;
}
int second_max(int b[],int s_size)
{
	int j;
	int smax=0;
	int large=max(b,s_size);
	for(j=0;j<s_size;j++)
	{
		
		if(b[j]>smax&&b[j]<large)
			smax=b[j];
	}
	return smax;
}

void main()
{
	int n,k,arr[100];
	printf("Enter number of elements:");
	scanf("%d",&n);
	printf("Enter elements of array:\n");
	for(k=0;k<n;k++)
	{
		printf("%d)",k+1);
		scanf("%d",&arr[k]);
	}
	int largest_number= max(arr,n);
	int second_largest= second_max(arr,n);
	printf("The largest number in array is %d\n",largest_number);
	printf("The second largest number is %d\n",second_largest);
}
	
	
	
	
	
	
	
	
		
