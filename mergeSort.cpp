#include <iostream>
#include <climits>

using namespace std;

void merge(int A[], int p, int q, int r);
void mergeSort(int A[], int p, int r);

int main()
{
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	mergeSort(arr, 0, n - 1);
	for(int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
	return 0;
}

void merge(int A[], int p, int q, int r)
{
	int n1 = q - p + 1, n2 = r - q;
	int L[n1 + 1], R[n2 + 1];
	for(int i = 0; i < n1; i++)
		L[i] = A[p + i];
	for(int i = 0; i < n2; i++)
		R[i] = A[q + i + 1];
	int i = 0,	j = 0, k = p;
	while((i < n1) && (j < n2))
	{
		if(L[i] <= R[i])
		{
			A[k] = L[i];
			i++;
		}
		else
		{
			A[k] = R[j];
			j++;
		}
		k++;
	}
	while(i < n1)
	{
		A[k] = L[i];
		k++;
		i++;
	}
	while(j < n2)
	{
		A[k] = R[j];
		k++;
		j++;
	}
}

void mergeSort(int A[], int p, int r)
{
	if(p < r)
	{
		int q = (p + r) / 2;
		mergeSort(A, p, q);
		mergeSort(A, q + 1, r);
		merge(A, p, q, r);
	}
}
