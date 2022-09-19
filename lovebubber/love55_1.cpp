#include<iostream>
#include<string>
#include<stack>
using namespace std;
// reverse string using stack [TC =  SC = O(n)] 

void reverse(string &st){
    stack<char>s;

    for (int i = 0; i < st.length(); i++)
    {
        s.push(st[i]);
    }  
    
    for (int i = 0; i < st.length(); i++)
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    
    cout<<"\n";
    
}
int main(){
    string st = "Soham";

    reverse(st);
}