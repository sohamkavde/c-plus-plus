#include<bits/stdc++.h>
using namespace std;
// two pointer approach 0 1 0 1 to 0 0 1 1 
void arrange(int arr[],int n){
   int i=0;
   int j = n-1;
   int m = n;
   while (i<j)
   {
       if(arr[i] == 1 && arr[j] == 0){
           int temp = arr[i];
           arr[i] = arr[j];
           arr[j] = temp;
       }
       if(arr[i] == 0){
           i++;
       }
     if(arr[j] == 1){
         j--;
       }

   }
   for (int i = 0; i < m; i++)
   {
       cout<<arr[i]<<" ";
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
    arrange(arr,n);
    return 0;   
}