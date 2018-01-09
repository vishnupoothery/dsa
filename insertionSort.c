#include<stdio.h>

int main()
{
	int n,i,j;
	scanf("%d",&n);
//n = number of elements in array
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(j=1;j<n;j++)
	{
		int key=a[j];
		i=j-1;
		while((i>=0)&&(a[i]>key))
		{
			a[i+1]=a[i];
			i--;
		}
		a[i+1]=key;
	}
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
	return 0;
}
