#include <iostream>
using namespace std;

int main(){
   int n; // Number of element
   cin>>n; //Get the value of n
   int arr[n]; // array declaration
   for (int i = 0; i < n-1; i++)
   {
       cin>>arr[i]; // inserting arrays values
   }
   // display array
   for (int i = 0; i < n-1; i++)
   {
       cout<<arr[i]<<" ";
   }
   cout<<endl;
   //Question1. remove array element
    // Answer. In cpp array size has to define on declaration time. so here we cann't remove element
   // add element in array
   arr[n-1] = 3; // element 3 is added at last position of the array
//    after adding last value in the array new array will be
for (int i = 0; i < n; i++)
   {
       cout<<arr[i]<<" ";
   }
   cout<<endl;

//    Update array 
    arr[n-1] = 4;

for (int i = 0; i < n; i++)
   {
       cout<<arr[i]<<" ";
   }
}