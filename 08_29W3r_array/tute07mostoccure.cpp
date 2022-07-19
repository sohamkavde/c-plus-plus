#include<bits/stdc++.h>
using namespace std;
int check =0,val=0;
void most(int arr[] , int n){
    for (int i = 0; i < n; i++)
    {
        int c = 0;
        for (int j = 0; j < n; j++)
        {
            if(arr[j] == arr[i]){
                c++;
            }
        }
        if(c>check){
        check = c;
        val = arr[i];
        }        
        
    }
    cout<<"ans:"<<val;
    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    most(arr,n);
}