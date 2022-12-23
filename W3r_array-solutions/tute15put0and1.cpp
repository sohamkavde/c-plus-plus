#include<bits/stdc++.h>
using namespace std;
// print all 0 left side and 1 on right side
void zero_one(int arr[],int n){
    int zero=0;
    int one =0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==0){
            zero++;
        }
        else if(arr[i] == 1){
            one++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(i<zero){
            cout<<0<<" ";
        }
        else if(i > zero-1 && i<zero+one){
            cout<<1<<" ";
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
    zero_one(arr,n);
}