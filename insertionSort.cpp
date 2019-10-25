#include <iostream>
#include <vector>

using namespace std;
void insertionSortRecursive(int arr[], int n) 
{ 
    // Base case 
    if (n <= 1) 
        return; 
  
    // Sort first n-1 elements 
    insertionSortRecursive( arr, n-1 ); 
  
    // Insert last element at its correct position 
    // in sorted array. 
    int last = arr[n-1]; 
    int j = n-2; 
  
    /* Move elements of arr[0..i-1], that are 
      greater than key, to one position ahead 
      of their current position */
    while (j >= 0 && arr[j] > last) 
    { 
        arr[j+1] = arr[j]; 
        j--; 
    } 
    arr[j+1] = last; 
} 
int main(){
    int n,i,j,key;
    cin>>n;
   int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    insertionSortRecursive(arr,n)
        ;
    for(i=0;i<n;i++)
    	cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
