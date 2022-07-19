#include<bits/stdc++.h>
using namespace std;
// m= student , arr elements are pages , n=size of array
bool Ispossible(int arr[],int n,int m, int mid){
    int student = 1;
    int add=0;//page sum
    for (int i = 0; i < n; i++)
    {
        if(add+arr[i]<=mid){
            add= add+arr[i];
        }else{
            student +=1;
            if(student>m||arr[i]>mid){// stuck here
                return false;
            }
            add =arr[i];
        }
    }
    return true;
    
}
void Book_alocation(int arr[],int n,int m){
    int sum =0;
    for (int i = 0; i < n; i++)
    {
        sum +=arr[i];
    }
    int s=0;
    int e = sum;
    int mid = s+(e-s)/2;
    int ans = 0;
    while (s<e)
    {
        if(Ispossible(arr,n,m,mid)){
            ans = mid;
            e=mid-1;
        }else{
            s =mid+1;
        }
        mid = s+(e-s)/2;
    }
    cout<<ans;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter number of days\n";
    int m;
    cin>>m;
    Book_alocation(arr,n,m);
}