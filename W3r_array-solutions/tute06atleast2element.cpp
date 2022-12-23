#include<iostream>
using namespace std;
void get_2_element(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        int check = 0;
        for (int j = 0; j < n; j++)
        {
            if(arr[j]>arr[i])
                check++;
        }
        if(check>2){
            cout<<arr[i]<<" ";
        }
    }
    
}
int main(){
    int n ;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    get_2_element(arr,n);
}