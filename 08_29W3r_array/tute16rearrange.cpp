#include<bits/stdc++.h>
using namespace std;
// 5
// 1 2 3 4 5
// 5 1 4 2 3 
void sort1(int arr[] , int n){
     int counter = 1;
    while (counter<n){
        for (int i = 0; i < n-counter; i++)
        {
           if(arr[i]>arr[i+1]){
               int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
           }
        }
        counter++;
    }
}
void rearrange(int arr[],int n){
    sort1(arr,n);
    int c=1,k=0;

    bool check = false;
    for (int i = 0; i < n; i++)
    {
        if(check){
            cout<<arr[k]<<" "; // small value
            k++;
            check = false;
        }else{
            cout<<arr[n-c]<<" ";// large value
            c++;
        check = true;
        }
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
    rearrange(arr,n);
}
