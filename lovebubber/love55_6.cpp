#include<bits/stdc++.h>
using namespace std;

// How many parenthesis is required to change to make  given input  valid

int getCount(string &s){
    if(s.length()%2 == 1){
        return -1;
    }

    stack<char>p;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];

        if(ch == '{'){
            p.push(ch);
        }else{
            if(!p.empty() && p.top() == '{'){
                p.pop();
            }else{
                p.push(ch);
            }
        }
    }

    int a =0;int b=0;
    while (!p.empty())      
    {
        if(p.top() == '{'){
            b++;
        }else{
            a++;
        }
        p.pop();
    }
    int ans = (a+1)/2 + (b+1)/2;
    return ans;   
    
}
int main(){
    string s = "{{{{{}}}";
    int val = getCount(s);
    cout<<val;
}