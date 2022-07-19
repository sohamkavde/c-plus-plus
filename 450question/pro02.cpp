#include<bits/stdc++.h>
using namespace std;
void max_min(int arr[],int n){
    // int max = INT_MIN;
    // int min = INT_MAX;
    // for (int i = 0; i < n; i++)
    // {
    //     if(arr[i]>max){
    //         max = arr[i];
    //     } 
    //     if(arr[i]<min){
    //         min = arr[i];
    //     }
    // }

    cout << *max_element(arr,arr+n) << " " << *min_element(arr,arr+n);
    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    max_min(arr,n);
    
}