#include<bits/stdc++.h>
using namespace std;
// question number 9 in the notebook
// change given array into wave form 
// arr[n] = {1,2,3,4,5} to arr[n]={2,1,4,3,5}
void wave(int arr[],int n){
    bool check = false;
    for (int i = 1; i < n; i++)
    {
        if(i%2!=0){
            if(arr[i-1]<arr[i]){
                swap(arr[i],arr[i-1]);
                check= true;
            }
        }else{
            if(arr[i-1]>arr[i]){
                swap(arr[i],arr[i-1]);
                check= true;
            }
        }
        // if(i== n-1 && check == true){
        //     i =0;
        // }
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<' ';
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
    
    wave(arr,n);
    return 0;
}