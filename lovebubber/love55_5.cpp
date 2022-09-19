#include<iostream>
#include<string>
#include<stack>
using namespace std;
// Reverse stack #Recursion
void insertAtbottom(stack<int> &s,int num){
    if(s.empty()){
        s.push(num);
        return;
    }
    int n = s.top();
    s.pop();
    
    insertAtbottom(s,num);
    s.push(n);
    
}

void reverseStack(stack<int> &stack) {
    // Write your code here
     if(stack.empty()){
        return;
       }
        int num = stack.top();
        stack.pop();       
        
        reverseStack(stack);
        insertAtbottom(stack  , num);
        
       
}