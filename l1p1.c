#include<stdio.h>
void main()
{
	int n,i;
	float avg;
	int sum=0;
	printf("Enter the numbers");
	for(i=0;i<=9;i++)
	{
		printf("%d",i+1);
		scanf("%d",&n);
	
		sum=sum+n;
	}
	avg=sum/10.0;
	printf("\nThe average of 10 numbers is %f\n",avg);
}
