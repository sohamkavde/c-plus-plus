#include<bits/stdc++.h>
using namespace std;
// update array by multiplying previous and next value

void update_mid(int arr[],int n){
    int arr1[n];
    arr1[0] = arr[0]*arr[1];
    for (int i = 1; i < n-1; i++)
    {
        arr1[i] = arr[i-1]*arr[i+1];
    }
    arr1[n-1] = arr[n-1]*arr[n-2];
    for (int i = 0; i < n; i++)
    {
        cout<<arr1[i]<< ' ';
    }
    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    update_mid(arr,n);
    return 0;
}