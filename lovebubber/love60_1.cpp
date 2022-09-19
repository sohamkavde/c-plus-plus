#include<bits/stdc++.h>
using namespace std;

class Cqueue{
    public:
        int * arr;
        int size;
        int front;
        int rear;

        Cqueue(int n){
            size = n;
            arr = new int[size];
            front = rear = -1;
        }

        // check isEmpty
        bool isEmpty(){
            if(front == -1){
                return -1;
            }
            return 0;
        }
        // check isFull
        bool isFull(){
            if((front == 0 && rear == size-1) || (rear == (front-1)%(size-1))){
                return 1;
            }            
            return 0;
        }

        // push operation
        void push(int data){
            if(isFull()){
                cout<<"Queue is Full"<<endl;
                return;
            }else if(rear == -1){
              front =  rear = 0;               
            }else if( (rear == size-1) && (front !=0)){
                rear = 0;
            }else{
                rear++;
            }
            arr[rear] = data;          

        }

        // pop operation
        void pop(){
            if(isEmpty()){
                cout<<"Queue is Empty"<<endl;
                return;
            }
            cout<<"Removed element is :"<<arr[front]<<endl;
            arr[front] = -1;
            if(front == rear){
                front = rear = -1;
            }else if(front == size-1){
                front =0;
            }else{
                front++;
            }            
        }
};
int  main(){
    Cqueue c(5);
    // Circular Queue is Empty
    c.pop();
    // insert element
    c.push(1);
    c.push(2);
    c.push(3);
    c.push(4);
    c.push(5);
    // Queue is Full
    c.push(6);   

    // pop operation
    c.pop();

    if(c.isFull()){
        cout<<"Queue is Full "<<endl;
    }else{
        cout<<"There is space in the Queue"<<endl;
    }
    c.push(6);
    c.pop();
    return 0;
}

// Results

// Queue is Empty
// Queue is Full
// Removed element is :1
// There is space in the Queue
// Removed element is :2