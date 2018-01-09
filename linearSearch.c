#include<stdio.h>

int linearSearch(int n, int a[n],int key)
{
	int i;
	for(i=0;i<n;i++)
		if(a[i]==key)
			return i;
	return -1;
}

int main()
{
	int n,key,i,j;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	scanf("%d",&key);
	int result=linearSearch(n,a,key);
	if(result == -1)
		printf("Element is not present in array\n");
	else
		printf("Element %d is at index %d \n",key,result+1);
	return 0;
}
