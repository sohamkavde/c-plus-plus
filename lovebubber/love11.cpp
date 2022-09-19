#include<bits/stdc++.h>
using namespace std;
// find triplet
int triplet(int  i , int j , int k){
    if(i>j&&i>k){
        if(i*i == j*j+k*k){
            return 1;
        }
    }else if(j>i&&j>>k){
        if(j*j == i*i+k*k){
            return 1;
        }
    }else{
        if(k*k == i*i+j*j){
                    return 1;
        }
    }
    return 0;
}
int find_triplet(int arr[],int n, int k){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int l = 0; l < n; l++)
            {
                if(arr[i]+arr[j]+arr[l] == k){
                 int ans = triplet(arr[i],arr[j],arr[l]);
                 if(ans == 1){
                     cout<< arr[i] <<" "<<arr[j]<<" "<<arr[l]<<endl;  
                       return 1;                 
                 }
                }
            }
            
        }
        
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter sum value  \n";
    int k;
    cin>>k;
    find_triplet(arr,n,k);
    
}