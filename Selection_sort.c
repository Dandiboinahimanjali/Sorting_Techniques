//Program For Selection  Sort///////////


#include<stdio.h>
int Selection_sort(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			int min=arr[j];
				if(min>arr[j+1])
				{
					int temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
				}
		}

	}
	return arr[size];
}
int main()
{
	int n;
	printf("Enter the size of Array ");
	scanf("%d",&n);
	int array[n];
	printf("Enter Elements Array ");
	for(int  i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	Selection_sort(array,n);
	printf("Array after Sorting");

	for(int i=0;i<n;i++)
	{
		printf("%d ",array[i]);
	}
}
