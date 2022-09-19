#include<bits/stdc++.h>
using namespace std;
// bubble sort lecture 17
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 1; i < n; i++) // if n = 5 than it will take 4 iteration
    {
        for (int j = 0; j < n-i; j++)
        {
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                
            }
        }
        cout<<i<<" ";
    }
    cout<<endl;
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    

}