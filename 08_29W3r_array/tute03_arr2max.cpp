#include<iostream>
using namespace std;
void get_second_largest_value(int arr[],int n){
    if(n<2){
        cout<<"Invalid Array !";
    }else{
        int first , second;
        first = second = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if(arr[i]>first){
                second = first;
                first = arr[i];
            }else if(arr[i]>second){
                second  = arr[i];
            }
        }
        cout<<"second  largest value in array is "<<second;
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
    
    get_second_largest_value(arr,n);
}