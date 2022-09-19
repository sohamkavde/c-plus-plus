#include<bits/stdc++.h>
using namespace std;

/// check given expression {[()]} is valid or not

bool validParenthesis(string expression){
    
    stack<char>s;
    for (int i = 0; i < expression.length(); i++)
    {
        char ch = expression[i];

        if(ch == '(' || ch == '[' || ch == '{'){
            s.push(ch);
        }else{
            if(!s.empty()){
                if((ch == ')' && s.top() == '(') ||    (ch == ']' && s.top() == '[') ||  (ch == '}'&& s.top() == '{')  ){
                    s.pop();
                }else{
                    return false;
                }
            }else{
                return false;
            }
        }
    }

    if(s.empty()){
        return 1;
    }else{
        return 0;
    }
    
}



int main(){
    string expression = "[[))()]]";
    if(validParenthesis(expression)){
        cout<<"Valid Expression \n";
    }else{
        cout<<"Invalid Expression \n";
    }
}