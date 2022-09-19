#include<bits/stdc++.h>
using namespace std;
// check is there really need of  () parenthesis or  not in given string

bool Validation(string &s)
{
    stack<char>p;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];          
        if(ch == '(' || ch == '+' || ch == '-' || ch == '/' || ch == '*'){
            p.push(ch);
        }else{
            if(ch == ')'){  
                    bool Result = 0;                    
                    while (!p.empty() && p.top() != '(')
                    { 
                        p.pop();
                        Result = 1;
                    }
                    
                    p.pop();
                    if(Result==0){                        
                        return false;
                    }
            }
        }
    }

   return true;
    
}
int main(){
    string s = "(a+c*b)+(c)";
    bool result = Validation(s);
    if(result){
        cout<<"valid Expression \n";
    }else{
        cout<<"Invalid Expression \n";
    }
   
}