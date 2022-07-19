// Reverse , isPalindrom , bubble sort
#include<bits/stdc++.h>
using namespace std;
void reverse(string&  s,int st ,int e){
    // cout<<n<<endl;
    if(st>e){
        return;
    }
    swap(s[st],s[e]);
    st++;
    e--;
    reverse(s,st,e);
   
}
bool isPalindrom(string s,int st , int e){
    if(st>e){
        return true;
    }
    if(s[st] != s[e]){
        return false;
    }
    st++;
    e--;
    return isPalindrom(s,st,e);
}
void Bubblesort(int arr[] , int n){
    if(n==0 || n==1){
        return;
    }
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    Bubblesort(arr,n-1);
    
}
int main(){
    // string s = "SohammahoS";
    // int n = s.length();
    // // reverse(s,0,n-1);
    // // cout<<s<<endl;
    // bool  check = isPalindrom(s,0,n-1);
    // if(check){
    //     cout<<"True"<<endl;
    // }else{
    //     cout<<"False"<<endl;
    // }

    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    Bubblesort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}