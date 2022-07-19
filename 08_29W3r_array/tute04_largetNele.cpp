#include <bits/stdc++.h>
using namespace std;
void K_largest_element(int arr[],int n ,int k){
    sort(arr,arr+n,greater<int>());
    for (int i = 0; i < k; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    int n;
    cout<<"Enter array size!"<<endl;
    cin>>n;
    cout<<"Get larget element till ? Please enter the number "<<endl;
    int k;
    cin>>k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    K_largest_element(arr,n,k);
    
}