#include<bits/stdc++.h>
using namespace std;
void update(int arr[],int n){
    int previous = arr[0];
    arr[0] = arr[0]*arr[1];
    int current;
    for (int i = 1; i < n-1; i++)
    {
        current = arr[i];
        arr[i] = previous * arr[i+1];
        previous = current;
    }
    arr[n-1] = previous * arr[n-1];

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    update(arr,n);
    return 0;
}