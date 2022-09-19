#include<bits/stdc++.h>
using namespace std;
// Implementation of Stack
class Stack{
    public:
        int size;
        int* arr;
        int top;
        Stack(int size){
            this->size = size;
            arr = new int[size];
            top = -1;
        }

        // push data
        void push(int data){
           
            if(size-top > 1){
                top = top+1;
                arr[top] = data;
            }else{                               
                cout<<"Stack Overflow\n";
            }
        }
        // pop
        void pop(){
            if(top>=0){
                top--;
            }
            else{
                cout<<"Stack Is empty\n";
            }
        }
        void peek(){
            if(top>=0){
                cout<<"Pick Element is : " <<arr[top]<<"\n";
            }else{
                cout<<"Stack Is empty\n"; 
            }
        }

        bool isEmpty(){
            if(top>=0){
                return false;
            }
            return true;
        }
       
};

void print(Stack s){
    if(s.top < 0){
        cout<<"Stack Is Empty!\n";
        return;
    }
      for (int i = 0; i <= s.top; i++)
    {
        cout<<s.arr[i]<<" ";
    }
    cout<<" \n";
}

int main(){
    Stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    // this statement give Stack overflow
    s.push(5);
    // s.push(5);
    print(s);

   
    // pop element
    s.pop();
    print(s);
    s.pop();
    s.pop();
    s.pop();
    // Stack is empty
    // s.pop(); 
    // s.pop();    
    print(s);

    s.peek();
    if(s.isEmpty()){
        cout<<"Empty result : True\n";
    }else{
        cout<<"Empty result : false\n";

    }
}