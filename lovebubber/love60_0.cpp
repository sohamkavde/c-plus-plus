#include<bits/stdc++.h>
using namespace  std;
// Create Queue
class Queue{
    public:
        int* arr;
        int size;
        int front;
        int rear;
    Queue(){
        size = 5;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    // isEmpty
    bool isEmpty(){
        if(front == rear){
            return 1;
        }
        return 0;
    }

    // isFull
    bool isFull(){
        if(rear == size){
            return 1;
        }
        return  0;
    }

    // push opertion
    void push(int  data){
        if(isFull()){
            cout<<"Queue is Full "<<endl;
            return;
        }

        arr[rear] = data;
        rear++;
    }

    void pop(){
        if(isEmpty()){
            cout<<"Queue is Empty "<<endl;
            return;
        }
        cout<<arr[front]<<endl;
        arr[front] = -1;
        front++;
    }

};
int  main(){
    Queue q;
    cout<<"push the element "<<endl;
    q.push(10);
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    // Queue is Full
    q.push(16);

    cout<<"pop the element "<<endl;
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    // Queu is empty
    q.pop();
    return 0;
}