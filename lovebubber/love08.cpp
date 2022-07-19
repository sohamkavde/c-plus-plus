#include<bits/stdc++.h>
using namespace std;
//given array like 1,2,3,1,2,3,4 ans 4 ,Four has no duplicatation
void uniquenumber(int arr[], int n){
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];       
    }
    cout<<ans;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    uniquenumber(arr,n);
    return 0;
}