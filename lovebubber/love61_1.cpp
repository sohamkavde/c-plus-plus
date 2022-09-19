#include<bits/stdc++.h>
using namespace std;
// Quetion - Reverse Queue # Here I add two approach

// this reverse funtion work on T.C. = S.C. =  O(n)
queue<int> reverse(queue<int> &q)
{
    // create stack
    stack<int>s;
    while (!q.empty())
    {
        s.push(q.front());
        q.pop();
    }

    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
    }

    return q;    

}

// OPTIMISE SOLUTION T.C = O(N) BUT S.C = O(1)
void reverse_recursion(queue<int> &q){
    if(q.empty()){
        return;
    }
    int val = q.front();
    q.pop();
    reverse_recursion(q);
    q.push(val);
}
queue<int> reverse_optimise(queue<int> &q){
    reverse_recursion(q);
    return q;
}

int main(){

    queue<int>q;
    q.push(2);
    q.push(5);
    q.push(6);
    q.push(8);
    q.push(10);

    // queue<int>ans =  reverse(q);
    queue<int>ans =  reverse_optimise(q);
    for (int i = 0; i < q.size(); i++)
    {
        int value = q.front();
        cout<<value<<" ";
        q.pop();
        q.push(value);
    }
    
    return 0;
}