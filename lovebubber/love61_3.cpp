#include<bits/stdc++.h>
using namespace std;
// Reverse first k element
queue<int> reverse_k(queue<int> &q , int k){
    stack<int>s;
    for (int i = 0; i < k; i++)
    {
        s.push(q.front());
        q.pop();
    }
    while (!s.empty())
    {
        q.push(s.top());
        s.pop();        
    }

    int t = q.size()-k;
    while (t--)
    {
        int value = q.front();
        q.pop();
        q.push(value);
    }
        
    return q;
}
int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    int k = 3;

    queue<int>ans = reverse_k(q,k);
    for (int i = 0; i < q.size(); i++)
    {
        int val = q.front();
        cout<<val<<" ";
        q.pop();
        q.push(val);
    }
    
}