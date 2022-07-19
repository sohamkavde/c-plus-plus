// Vector declaration , initialinsation , inserting 
// puch_back , (begin , end ) , (cbegin , cend) ,
// Reverse order  (rbegin , rend ), (crbegin , crend)
// size , capacity , max_size , resize , empty , at , front , back
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>g;//declaration
    for (int i = 1; i <= 5; i++)    
        g.push_back(i); // inserting
    cout<<" Output with begin and end : ";
    for (auto i = g.begin(); i != g.end(); i++)
            cout << *i <<" ";
    cout<<"\n Output with cbegin and cend :";
    for (auto i = g.cbegin(); i != g.cend(); i++)
            cout << *i << " ";
    cout<<"\n Output with rbegin and rend :";
    for(auto i=g.rbegin(); i != g.rend(); i++)
        cout << *i << " ";
    cout<<"\n Output with crbegin and crend :";
    for(auto i = g.crbegin(); i != g.crend(); i++)
        cout<< *i <<" ";

    cout<<"\n size of vector g is :"<<g.size();
    cout<<"\n capacity of vector g is :"<<g.capacity();
    cout << "\n max_size of vector g is :"<< g.max_size();
    g.resize(4);
    cout<<"\n after resize vector g from 5 to 4 so resize value is : "<< g.size();
    if(g.empty())
        cout<<"\n Vector g is empty";
    else    
        cout<<"\n Vector g is not empty";
    
    cout<<endl;
    cout<<"reference operator g : g[2] : " << g[2] << endl;
    cout<<"Using of at : " << g.at(2)<<endl;
    cout<<"Print front element : "<< g.front()<<"\n Print back element " << g.back();

    
}