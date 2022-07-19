#include<bits/stdc++.h>
using namespace std;


void reverse(int arr[],int n,int k){
    int s= k+1;
    int e = n-1;
    while (s<=e)    
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    for(int i=0; i<n; i++){
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
    int k;
    cin>>k;
    reverse(arr,n,k);
    
}