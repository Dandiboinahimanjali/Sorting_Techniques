//Bubble Sort Program//


#include<stdio.h>
int bubblesort(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size-i-1;j++)
		{
		if(arr[j]>arr[j+1])
			{
				int temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
			}
		}
	}
	return arr[size];
}
int main()
{
	int n;
	printf("Enter the size of array ");
	scanf("%d",&n);

	int arr[n];
	printf("Enter the ele ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	bubblesort(arr,n);
	printf("Bubble Sorted ");
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
