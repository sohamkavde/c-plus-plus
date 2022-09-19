#include<bits/stdc++.h>
using namespace std;
//Largest Rectangle in Histogram

vector<int> nextSmallestNumber(vector<int> s,int n){
    stack<int>k;
    k.push(-1);
    vector<int>ans(n);
    for (int i = n-1; i >= 0; i--)
    {
        int curr = s[i];
        while(k.top() != -1 && s[k.top()]>=curr){
            k.pop();
        }
        ans[i] = k.top();
        k.push(i);
    }
    return ans;
}

vector<int> prevSmallestNumber(vector<int> s,int n){
    stack<int>k;
    k.push(-1);
    vector<int>ans(n);

    for (int i = 0; i <n; i++)
    {
        int curr = s[i];
          while(k.top() != -1 && s[k.top()]>=curr){
            k.pop();
        }
        ans[i] = k.top();
        k.push(i);
    }
    return ans;
}
int largestRectangleArea(vector<int> &s){    
    int n = s.size();

    vector<int>next(n);
    next = nextSmallestNumber(s,n);
    vector<int>prev(n);
    prev = prevSmallestNumber(s,n);

    int NewArea = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int  l = s[i];
        if(next[i] == -1){
            next[i] = n;            
        }
        int  b = next[i]-prev[i]-1;

        int  area = l*b;
        NewArea = max(NewArea,area);
    }

    return NewArea;    
    
}
int main(){
    vector<int> s = {2,1,5,6,2,3};
    
   int ans =  largestRectangleArea(s);
   cout<< " Largest Area : "<<ans;
    cout<<"\n";
    
}