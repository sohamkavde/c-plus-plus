#include<bits/stdc++.h>
using namespace  std;
// find missing minimum and maximum element
//8 {1,3,4,5,6,7,8,10} , min = 2, max = 9
void smallest_missing(int arr[],int n){
    int maxi = INT_MIN;
    int mini = INT_MAX;
    for (int i = 1; i < n; i++)
    {
        if(arr[i-1] != arr[i]-1){
            mini = min(mini,(arr[i]-1));
            maxi = max(maxi,(arr[i]-1));
        }
    }
    
         cout<<mini<<" - "<<maxi;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    smallest_missing(arr,n);
}