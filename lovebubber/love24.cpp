#include<bits/stdc++.h>
using namespace std;
void merge_array(int nums1[],int  m, int nums2[],int n){
       int j =0;
        for(int i=m; i<m+n;i++){             
               nums1[i] = nums2[j++];             
        }         
        
        sort(nums1,nums1+m+n);
        
}

int main(){

    cout<<"Enter value of m\n";
    int m;
    cin>>m;
    cout<<"Enter value of n \n";
    int n;
    cin>>n;
    int nums1[m+n];
    for (int i = 0; i < m+n; i++)
    {
        cin>>nums1[i];
    }
    int nums2[n];
    for (int i = 0; i < n; i++)
    {
        cin>>nums2[i];
    }
    
    merge_array(nums1,m,nums2,n);
    


}