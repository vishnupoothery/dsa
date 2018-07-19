#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a;
    while(1){
        cin>>a;
        if(a==0)
        break;
        if(a%15 == 0)
        cout<<"fizz buzz ";
        else if(a%5 == 0)
        cout<<"buzz ";
        else if(a%3 == 0)
        cout<<"fizz ";
    }
    return 0;
}
