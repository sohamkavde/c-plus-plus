#include<bits/stdc++.h>
using namespace std;
// insertion sort, assume first element is already sorted
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i]; 
        int j = i-1; 
        while (arr[j]>temp && j>=0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
        
    }
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}