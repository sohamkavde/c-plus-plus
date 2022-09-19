#include<bits/stdc++.h>
using namespace std;
// Find duplicate value from given number when every given element is positive integer
//T.C O(n), S.C. = max(arr[])
// Maping  Concept Used
vector<int> duplicate_number(int arr[],int n){
    int totalNewElement = arr[0];
    for (int i = 0; i < n; i++)
    {
        if(totalNewElement<arr[i]){
            totalNewElement = arr[i];
        }
    }
    // Extra space
    vector<int>NewArray(totalNewElement,10); // vector with default positive value
    vector<int>vec;
    for (int i = 0; i < n; i++)
    {
        int index = arr[i]-1;// Creating index

        if (NewArray[index]<0){ // checked where given index has negative value
            int num = index+1;
            vec.push_back(num);
            continue; // skip below code and jump to next iteration
        }
        NewArray[index] = -1; // if index has positive value than make it negative       
        
    }
    return vec;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    vector<int> ans = duplicate_number(arr,n);
     for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
}