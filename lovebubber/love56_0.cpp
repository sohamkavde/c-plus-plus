#include<bits/stdc++.h>
using namespace std;
//Next first smallere element TC = SC = O(N)
vector<int> rightsmall(vector<int> &s,int n){    
    stack<int>k;
    k.push(-1);
    vector<int>ans(n);
    for (int i =n-1; i >=0; i--)
    {
       int curr = s[i];
       while (k.top()>=curr)
       {
            k.pop();
       }
       ans[i] = k.top();
       k.push(curr);       
    }
    return ans;
    
}
int main(){
    vector<int> s = {4,5,3,6,1};
    
    vector<int> ans= rightsmall(s,5);
    for (int i = 0; i < 5; i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
    
}