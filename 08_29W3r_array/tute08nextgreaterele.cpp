#include<bits/stdc++.h>
using namespace std;
void next_greater(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[i]<arr[j]){
                cout<<arr[i]<<":"<<arr[j]<<endl;
                break;
            }
        }
        
    }
    
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    next_greater(arr,n);
}