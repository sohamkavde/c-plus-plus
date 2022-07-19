#include<bits/stdc++.h>
using namespace std;
// find number  but this program throw time limit exceed
int binarysearch(int arr[],int s , int e , int k){
    int  ans = s;
    int mid = s+(e-s)/2;
    while(s<=e)
    {
        if(arr[mid] == k){
            ans= mid;
        }else if(arr[mid]<k){
            s= mid+1;
        }else{
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
void find_num(int arr[],int n , int k){
    int s=0;
    int e=n;
    int mid = s +(e-s)/2;
    while (s<e)
    {
        if(arr[mid]>=arr[0]){
            s = mid +1;
        }else{
            e = mid;
        }
        mid = s +(e-s)/2;
    }
    int pivot = s;
    int ans = -1;
    if(arr[pivot]<=k&&k<=arr[n-1]){
        ans = binarysearch(arr,pivot,n-1,k);
    }else{      
        ans = binarysearch(arr,0,pivot-1,k);
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

    cout<<"Enter number for searching\n";
    int k;
    cin>>k;
    find_num(arr,n,k);
    
}