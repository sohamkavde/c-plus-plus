#include<iostream>
#include<string>
#include<stack>
using namespace std;
// insert data in middle of the node
void print(stack<int>s){
    if(s.empty()){
        return;
    }
    int num = s.top();
    s.pop();

    print(s);

    cout<<num<<" ";


}

void insertAtMiddle(stack<int>&s,int num,int size,int c){
    if(s.empty() || size == c)
    {
        s.push(num);
        return;
    }


    int x = s.top();
    s.pop();
    c++;
    insertAtMiddle(s,num,size,c);

    s.push(x);
}

int main(){
    stack<int>s;
    int x;
    int  arr[5]= {12, 11, 16 ,25}; // for making it automatic
    for (int i = 0; i < 4; i++)
    {
        
        s.push(arr[i]);
    }
    int size = s.size()/2;
    int c = 0;
    insertAtMiddle(s,5,size,c);
    print(s);
}

