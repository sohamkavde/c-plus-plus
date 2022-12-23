// vector part 2 
// assign , push , pop 
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    vector<int>g;

    cout<<"Using assign method : \n";
    g.assign(5,10);
    cout<< "Print values : \n";
    for (auto i = g.begin(); i != g.end(); i++)
    {
        cout<< *i <<" ";
    }
    cout<<"After using pop_back() and insert() \n";
    g.pop_back();
    g.insert(g.begin() , 5);
     for (auto i = g.begin(); i != g.end(); i++)
    {
        cout<< *i <<" ";
    }
    g.erase(g.end());
    
    
}