#include<iostream>
#include<string>
#include<stack>
using namespace std;
// insert  data at the bottom i.e. in the first position of given number

void insertAtBottom(stack<int> &s,int x , int val){
        if(s.empty()){
            s.push(val);
            return;
        }
        int num = s.top();
        s.pop();

        insertAtBottom(s,x+1,val);
        s.push(num);
}

void print(stack<int>s){
    if(s.empty()){
        return;
    }
    int num = s.top();
    s.pop();

    print(s);

    cout<<num<<" ";


}

int main(){
    stack<int>s;
    for (int i = 0; i < 5; i++)
    {
        s.push(i);
    }

    insertAtBottom(s,0,12);
    print(s);
    
}

