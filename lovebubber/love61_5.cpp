#include<bits/stdc++.h>
using namespace std;
// Circular tour

int circular_tour(vector<int>&p,vector<int>d){
    int  balance = 0;
    int  start = 0;
    int deficiency = 0;

    for (int i = 0; i < p.size(); i++)
    {
        balance += p[i]-d[i];
        if(balance<0){
            deficiency = balance;
            start = i+1;
            balance = 0;
        }
    }
    if(balance + deficiency >= 0){
        return start;
    }
    return -1;
    
}

int main(){
    
    vector<int>p;
    vector<int>d;
    p.push_back(6);
    d.push_back(5);

    p.push_back(7);
    d.push_back(6);

    p.push_back(4);
    d.push_back(7);

    p.push_back(10);
    d.push_back(8);

    p.push_back(6);
    d.push_back(6);

    p.push_back(5);
    d.push_back(4);

    int ans  = circular_tour(p,d);
    cout<<ans<<endl;

}