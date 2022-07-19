#include<bits/stdc++.h>
using namespace std;
// Find duplicate value from given number when every given element is positive integer
vector<int> duplicate_number(int arr[],int n){
    vector<int>vec;
    for (int i = 0; i < n; i++)
    {
        int index = arr[i]-1;

        if (arr[index]<0){
            int num = index+1;
            vec.push_back(num);
            continue;
        }
        arr[index] = -arr[index];
        
        
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