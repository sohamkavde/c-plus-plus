#include<bits/stdc++.h>
using namespace std;
// Get nCr , important thing is long long datatype because when we multiply any postive number that's value increase very fast 
long long fact(int a){
    long long result=1;
    for (int i = 2; i <= a; i++)
    {
        result = result*i;
        // cout<<result<<endl;
    }
    return result;
}
void ncr(int n, int c){
    long long up =  fact(n);
    long long down = fact(c)*fact(n-c);
    long long ans =up/down;
    cout<<ans;
    
}
int main(){
    int n;
    cin>>n;
    int c;
    cin>>c;
    ncr(n,c);
    return 0;
}