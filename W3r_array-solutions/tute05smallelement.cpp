#include<bits/stdc++.h>
using namespace std;
void small(int arr[], int n){
    sort(arr,arr+n);
    cout<<arr[1];
}
int main(){
    int n;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    small(arr,n);
}