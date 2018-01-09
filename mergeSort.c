#include<stdio.h>

void merge(int a[],int p,int q,int r)
{
	int i,j,k,n1=q-p+1,n2=r-q;
	int L[n1],R[n2];
	for(i=0;i<n1;i++)
		L[i]=a[p+i];
	for(i=0;i<n2;i++)
		R[i]=a[q+i+1];
	i=0;
	j=0;
	k=p;
	while((i<n1)&&(j<n2))
	{
		if(L[i]<=R[i])
		{
			a[k]=L[i];
			i++;
		}
		else
		{
			a[k]=R[j];
			j++;
		}
		k++;
	}
	while(i<n1)
	{
		a[k]=L[i];
		k++;
		i++;
	}
	while(j<n2)
	{
		a[k]=R[j];
		k++;
		j++;
	}
}

void mergeSort(int a[],int p,int r)
{
	if(p<r)
	{
		int q=(p+r)/2;
	        mergeSort(a,p,q);
		mergeSort(a,q+1,r);
		merge(a,p,q,r);

	}
}

int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	mergeSort(a,0,n-1);
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}
