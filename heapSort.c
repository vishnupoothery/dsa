#include<stdio.h>

int LEFT(int i)
{
	return 2*i+1;
}

int RIGHT(int i)
{
 	return 2*(i+1);
}

int PARENT(int i)
{
	if(i%2==0)
		return i/2-1;
	else
		return (i-1)/2;
}

void swap(int *a,int *b)
{
	*a+=*b;
	*b=*a-*b;
	*a-=*b;
}

void maxHeapify(int n,int a[n],int i)
{
	int l=LEFT(i),r=RIGHT(i),largest;
	if((l<n)&&(a[l]>a[i]))
		largest = l;
	else
		largest = i;
	if((r<n)&&(a[r]>a[largest]))
		largest = r;
	if(largest != i)
	{
		swap(&a[i],&a[largest]);
		maxHeapify(n,a,largest);
	}
}

void buildMaxHeap(int n,int a[n])
{
	int i;
	for(i=PARENT(n);i>=0;i--)
		maxHeapify(n,a,i);
}

void heapSort(int n,int a[n])
{
	int i;
	buildMaxHeap(n,a);
	for(i=n-1;i>0;i--)
	{
		swap(&a[0],&a[i]);
		maxHeapify(i,a,0);
	}
}

int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	heapSort(n,a);
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	return 0;
}
