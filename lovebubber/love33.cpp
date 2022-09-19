//isSorted ,lenearSort,BinarySort
#include<bits/stdc++.h>
using namespace std;

//checking array is sorted or not
bool isSorted(int arr[] , int n){
    if(n==0 || n==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }

    return isSorted(arr+1,n-1); // arr+1 = moving left side to right  by 1 position,n-1=reducing size of array
}

bool lenearSearch(int arr[] , int n , int k){
    if(n==0){
        return false;
    }
    if(arr[0] == k){
        return true;
    }

    return lenearSearch(arr+1,n-1,k);

}
bool BinarySearch(int arr[],int s,int n, int k){
    if(s>n){
        return 0;
    }

    int mid = s+(n-s)/2;
    if(arr[mid]==k){
        return true;
    }
    if(arr[mid]<k){
           return BinarySearch(arr,mid+1,n,k);
    }else{
           return BinarySearch(arr,s,mid-1,k);
    }
    
}
int main(){
    // int n;
    // cin>>n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>arr[i];
    // }
    // bool check = isSorted(arr,n);
    // if(check){
    //     cout<<"Array is sorted"<<endl;
    // }else{
    //     cout<<"Array  is not sorted"<<endl;
    // }


    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    // bool check = lenearSearch(arr,n,k);
    bool check = BinarySearch(arr,0,n-1,k);
    cout<<check<<endl;
    
}