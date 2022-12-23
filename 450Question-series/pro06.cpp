#include<bits/stdc++.h>
using namespace std;
// get the union of two array 
void unionarray(int arr[],  int brr[],int n, int m){
   set<int>s;
    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }
    
    for(int j=0;  j<m;  j++)
    {
        s.insert(brr[j]);
    }

    cout<<s.size();
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    cout<<"second array  \n";
    int m;
    cin>>m;
    int brr[m];
    for (int i = 0; i < m; i++)
    {
        cin>>brr[i];
    }

    unionarray(arr,brr,n,m);
    
}