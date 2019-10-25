#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n,i,j,key,element;
    cin>>n;
    vector<int> arr(n);
    for(i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Enter element to be searched- Njn Pandee pwoliyaa\n"; 
    cin>>element;
    for(j=0;j<arr.size();j++){
        if(arr[j]==element){
            cout<<"Success! element found!\n";
            return 0;
        }
        
    }
    cout<<"Failure!! Element not found!\n";
    return 0;
}
