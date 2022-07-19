#include<bits/stdc++.h>
using namespace std;
//
int complement(int n){
    int mask = 0;
    int m = n;
    if(n==0){
        return 1;
    }
    while(m){
        mask = (mask<<1)|1;        
        m=m>>1;
   }
    
    int ans = (-n) & mask;
    return ans;
}

int main(){
    int n;
    cin>>n;
    int ans =  complement(n);
    cout<<'\n'<<ans;
    return 0;

}