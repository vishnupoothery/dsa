#include<stdio.h>

int binarySearch(int a[],int low,int high,int key)
{
	if(low>high)
		return -1;
	else
	{
		int mid=(low+high)/2;
		if(key==a[mid])
			return mid;
		else if(key<=a[mid])
			return binarySearch(a,low,mid-1,key);
		else
			return binarySearch(a,mid+1,high,key);
	}
}


int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	int key;
	scanf("%d",&key);
	int result = binarySearch(a,0,n-1,key);
	if(result == -1)
		printf("Element is not present in array\n");
	else
		printf("Element %d is at index %d\n",key,result+1);
	return 0;
}
