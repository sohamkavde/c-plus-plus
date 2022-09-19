#include<bits/stdc++.h>
using namespace std;
// Interleave the first half of the queue  with second  half
// by using queue
queue<int> interleave(queue<int> &q){
    queue<int>n;
    for (int i = 0; i <= q.size()/2; i++)
    {       
        n.push(q.front());
        q.pop();
    }
    

    while (!n.empty())  
    {
        int value = n.front();
        n.pop();
        q.push(value);

        int nextvalue = q.front();
        q.pop();
        q.push(nextvalue);
    }

    return q;   

}
// but I neeed to use stack only
queue<int> interleave_s(queue<int>&q){
    stack<int>s;
    // push value in stack
    for (int i = 0; i <= q.size()/2; i++)
    {
        s.push(q.front());
        q.pop();
    }
    
    // push value in the queue until stack is empty
    while (!s.empty())
    {

        q.push(s.top());
        s.pop();
    }

    // pop value from front and add it  in the last of the queue
    for (int i = 0; i < q.size()/2; i++)
    {
        int val =  q.front();
        q.pop();
        q.push(val);
    }

    // again add value in stack
    for (int i = 0; i <= q.size()/2; i++)
    {
        s.push(q.front());
        q.pop();
    }

    while (!s.empty())  
    {
        int value = s.top();
        s.pop();
        q.push(value);

        int nextvalue = q.front();
        q.pop();
        q.push(nextvalue);
    }

    return q; 
}

int main(){
    queue<int>q;
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);
    q.push(16);
    

    // queue<int>ans = interleave(q);
    queue<int>ans = interleave_s(q);
    for (int i = 0; i < ans.size(); i++)
    {
        int val = ans.front();
        cout<<val<<" ";
        ans.pop();
        ans.push(val);
    }
    
}