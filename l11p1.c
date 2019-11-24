#include<stdlib.h>
#include<stdio.h>
int arr[100];
void merge(int lower, int mid, int upper)

{
	int i, j, k; 
    int h1 =(mid-lower) + 1; 
    int h2 =(upper-mid);
    
    int A1[h1], A2[h2];
    
    for(i=0;i<h1;i++) 
        A1[i]=arr[lower+i]; 
    for(j=0;j<h2;j++) 
        A2[j]=arr[mid+1+j];
    i=0; 
    j=0;
    k=lower;
    while(i<h1 && j<h2) 
    { 
        if(A1[i]<=A2[j]) 
        { 
            arr[k]=A1[i]; 
            i++; 
        } 
        else
        { 
            arr[k]=A2[j]; 
            j++; 
        } 
        k++; 
    } 
    
    while(i<h1) 
    { 
        arr[k]=A1[i]; 
        i++; 
        k++; 
    }     
    
    while(j<h2)
    {
    	arr[k]=A2[j];
    	j++;
    	k++;
    }  
}     

void show(int n)
{
	int i;	 
    for(i=0;i<n;i++) 
        printf("%d\t",arr[i]); 
    printf("\n"); 
} 

  

void mergesort(int lower,int upper)
{

    if(lower<upper)
	{
		int mid = (lower+upper)/2;
		mergesort(lower,mid);
		mergesort(mid+1,upper);
		merge(lower,mid,upper);

    }

}

void main()
{
	int size,i;
	printf("Enter size of array:");
	scanf("%d",&size);
	printf("Enter elements of array:");
	for(i=0;i<size;i++)
	{
		printf("%d)",i);
		scanf("%d",&arr[i]);
	}	
 	printf("\nArray before sorting:\n "); 
    show(size);
		
  	
    mergesort(0,size-1);  
    printf("\nSorted array is \n"); 
    show(size);
}


























