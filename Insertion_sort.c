#include<stdio.h>
int insertion_sort(int arr[],int size)
 {
for(int i=1;i<size;i++)
{
	int key=arr[i];
	int j=i-1;
	while(j>=0 && arr[j]>key)
	{
		arr[j+1]=arr[j];
		j--;
	}
	arr[j+1]=key;
	 }
	 return arr[size];
 
}
int main()
{
	int n;
	printf("Enter the size ");
	scanf("%d",&n);
	int array[n];
	printf("enter ele of array ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	insertion_sort(array,n);
	printf("Insertion Sorting ");
	for(int i=0;i<n;i++)
	{
		printf("%d ",array[i]);
	}
} 












