#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int  arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int maxsum = 0;
    int current =0;
    bool check = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>0){
            check = 1;
        }
    }
    if(!check){
        maxsum = INT_MIN;
    }
    
    for (int j = 0; j < n; j++)
    {
        if(check){
            current = current + arr[j];
            if(current>maxsum){
                maxsum = current;
            }
            if(current<0){
                current=0;
            }
        }else{
            if(arr[j]>maxsum){
                maxsum = arr[j];
            }
        }
    }
    
    cout<<maxsum;
    
}