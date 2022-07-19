#include<bits/stdc++.h>
using namespace std;
// find intersection or same element from two given array
void Find_intersection(int arr[], int arr1[],int n, int k){
    // for below method time complexity is high
    // for (int i = 0; i < k; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if(arr[j]==arr1[i]){
    //             cout<<arr[j]<<" ";
    //         }
    //     }
        
    // }
    //-------optimise way nlogn I need to work on time complexity
    int i=0; int j=0;
    while (n>0 && k>0)
    {
        if(arr[i]==arr1[j]){            
            cout<<arr[i]<<" ";
            i++;
            j++;
            n--;
            k--;
        }else if(arr[i]<arr1[j]){            
            i++;
            n--;
        }else{           
            j++;
            k--;
        }
    }
    
    
}
int main(){
    cout<<"Enter first array size and elements\n";
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter second array size and elements\n";
    int k;
    cin>>k;
    int arr1[k];
    for (int i = 0; i < k; i++)
    {
        cin>>arr1[i];
    }
    Find_intersection(arr,arr1,n,k);
    return 0;
}