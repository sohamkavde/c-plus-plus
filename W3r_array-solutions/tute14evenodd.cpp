#include<bits/stdc++.h>
using namespace std;
// put  all even number one sid and odd number other side
void print(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void even_odd(int arr[],int n){
    int pos =0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]%2 ==0){
            swap(arr[pos],arr[i]);
            pos++;
        }
    }
           print(arr,n);   
    
    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    even_odd(arr,n);
}