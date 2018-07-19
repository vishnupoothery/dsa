#include<bits/stdc++.h>

using namespace std;

int main()
{
	int v, e;
	cout << "Enter no of vertices : ";
	cin >> v;
	int arr[v][v];
	for(int i = 0; i < v; i++)
	{
		for(int j = 0; j < v; j++)
			arr[i][j] = 0;
	}
	cout << "Enter number of edges : ";
	cin >> e;
	cout << "Enter the edges : ";
	for(int i = 0; i < e; i++)
	{
		int p, q;
		cin >> p >> q;
		arr[p-1][q-1] = 1;
	}

	for(int i = 0; i < v; i++)
	{
		for(int j = 0; j < v; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}

	return 0;
}
