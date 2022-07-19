#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a;
    int arr[a];
    
    for (int i = 0; i < a; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the number to be found\n";
    cin>>b;
    for (int j = 0; j < a; j++)
    {
        if(b == arr[j]){
            cout<<j<<endl;
        }
    }
    
    
}