#include<bits/stdc++.h>
using namespace std;
// find pivot(smallest number in array in log(n)) in rotated sorted array
void pivot(int arr[],int  n){
    int s=0;
    int e = n;
    int mid = s+(e-s)/2;
    while(s<e)
    {
        if(arr[mid]>=arr[0]){
            s = mid+1;
        }else{
            e = mid;
        }
        mid = s+(e-s)/2;
    }
    cout<<s;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }    
    pivot(arr,n);
}