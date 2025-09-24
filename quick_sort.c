//Quick Sort In  C Programming //


#include<stdio.h>

void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

int partition(int arr[],int low,int high)
{
int pivot=arr[high]; //last element
int i=(low-1); //index of small ele

for(int j=low;j<high;j++)
{
if(arr[j]<=pivot)
{
	i++;
	swap(&arr[i],&arr[j]);
}
}
swap(&arr[i+1],&arr[high]);
return(i+1);
}
void quicksort(int arr[],int low,int high)
{ 
if(low<high)
{
	int pivot=partition(arr,low,high);

	//Recursion sort left and right sub arrays
	quicksort(arr,low,pivot-1);
	quicksort(arr,pivot+1,high);
}
}

int main()
{
	int n;
	printf("Enter size of the Array ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the Elements of Array ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	quicksort(arr,0,n-1);
	printf("After Sorting Array ");
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
