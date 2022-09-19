#include<bits/stdc++.h>
using namespace std;
// find first  negative integer in every window of size k 

vector<int> find_negative(vector<int> &q,int  k){
    deque<int>d;
    vector<int>ans;
    for (int i = 0; i < k; i++)
    {
        if(q[i]<0){
            d.push_back(i);
        }
    }
    if(d.size()>0){
        ans.push_back(q[d.front()]);
    }else{
        ans.push_back(0);
    }

    for (int i = k; i < q.size(); i++)
    {
        // Removal element
        if(!d.empty() && i-d.front()>=k){
            d.pop_front();
        }
        // addition element
        if (q[i]<0)
        {
            d.push_back(i);
        }
        if(d.size()>0){
            ans.push_back(q[d.front()]);
        }else{
            ans.push_back(0);
        }      

    }
    
    return ans;
    
}

int main(){
    vector<int>q;
    q.push_back(-8);
    q.push_back(2);
    q.push_back(3);
    q.push_back(-6);
    q.push_back(10);
     
    int k = 2;

    vector<int>ans = find_negative(q,k);
    for (int i = 0; i < ans.size(); i++)
    {
      cout<<ans[i]<<" ";
    }
    cout<<"\n";
    
    
}