//Program in Merge _Sort//
//



#include<stdio.h>
void merge_sort(int arr[],int left,int mid,int right)
{
	int n1=mid-left+1;//left subarray
			 int n2=right-mid;//right sub array
	int L[n1],R[n2];
	for(int i=0;i<n1;i++)
	{
           L[i]=arr[left+i];
	}
	for(int j=0;j<n2;j++)
	{
		R[j]=arr[mid+j+1];
	}
	int i=0,j=0,k=left;
while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k++] = L[i++];
            
        } else {
            arr[k++] = R[j++];
            }
}
	while(i<n1)
	{
arr[k++]=L[i++];
	}

	while(j<n2)
	{

		arr[k++]=R[j++];
	}
	}

void merge(int arr[],int left,int right)
{
if(left<right){
     int mid=left+(right-left)/2;

merge(arr,left,mid);
	merge(arr, mid+1,right);
	merge_sort(arr,left,mid,right); 

}
}
int main()
{
	int n;
	printf("Enter the Size of array ");
	scanf("%d",&n);
	int arr[n];

	printf("Enter the array  elments");

	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}	
	merge(arr,0,n-1);
	printf("After Merge Sort ");

	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
 }
