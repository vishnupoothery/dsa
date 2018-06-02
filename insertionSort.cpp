#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n,i,j,key;
    cin>>n;
    vector<int> arr(n);
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(j=1;j<arr.size();j++){
        i=j-1;
        key = arr[j];
        while((i>=0)&&(arr[i]>key)){
            arr[i+1]=arr[i];
            i--;
        }
        arr[i+1]=key;
    }
    for(i=0;i<arr.size();i++)
    	cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}