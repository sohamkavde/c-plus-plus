#include<bits/stdc++.h>
using namespace std;

// Factorial using Recursion and multiple of 2
long factorial(int n){
    if(n==0)
        return 1;
    
    int  bigCase = factorial(n-1);
    int  smallCase = n*bigCase;
    return smallCase;
}
int multiple(int n){
    if(n==0){
        return 1;
    }
    return 2*multiple(n-1);
}
int main(){
    // int n;
    // cin>>n;
    // long ans = factorial(n);
    // cout<<ans;

    int n;
    cin>>n;
    int ans = multiple(n);
    cout<<ans;

}