#include<iostream>
#include<string>
#include<stack>
using namespace std;
// sort stack
void print(stack<int>s){
    if(s.empty()){
        return;
    }
    int num = s.top();
    s.pop();

    print(s);

    cout<<num<<" ";


}
void insertInsorting(stack<int> &s, int num){
    if(s.empty() || s.top()<num){
        s.push(num);
        return;
    }
    int x = s.top();
    s.pop();

    insertInsorting(s,num);
    s.push(x);
}
void sortStack(stack<int> &s){
    if(s.empty()){
        return;
    }
    int num = s.top();
    s.pop();

    sortStack(s);

    insertInsorting(s,num);

}
int main(){
    stack<int>s;
    int x;
    // int  arr[5]= {12, 11, 15, 16 ,25}; // for making it automatic
    for (int i = 0; i < 5; i++)
    {
        cin>>x;
        s.push(x);
    }
    
    sortStack(s);
    print(s);
    
}

