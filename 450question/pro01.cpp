#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int n){
    int st = 0;
    int end = n-1;
    while (st<end)
    {
        int temp = arr[st];
        arr[st] = arr[end];
        arr[end] = temp;
        st++;
        end--;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}

int main(){
    int n;
    cin>>n;
    int  arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    reverse(arr,n);
    
}
