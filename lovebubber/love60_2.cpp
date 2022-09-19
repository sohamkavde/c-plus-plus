#include<bits/stdc++.h>
using namespace std;

class Dqueue{
    public:
        int *arr;
        int size;
        int front;
        int rear;

        Dqueue(int n){
            size = n;
            arr = new int[size];
            front = rear = -1;
        }
        // is Empty
        bool isEmpty(){
            if(front == -1){
                return 1;
            }
            return 0;
        }

        // is Full
        bool isFull(){
            if((rear == size-1) || ((front != 0) && (rear == (front-1)%(size-1)))){
                return 1;
            }else{
                return 0;
            }
        }

        // push front
        void push_front(int data){
            if(isFull()){
                cout<<"Queue is Full "<<endl;
                return;
            }

            if(front == -1){
                front = rear = 0;
            }else if(front == 0 && rear != size-1){
                front = size-1;
            }else{
                front--;
            }
            arr[front] = data;
        }

        void pop_front(){
            if(isEmpty()){
                cout<<"Queue is Empty"<<endl;
                return;
            }
            cout<<"pop_front() : "<<arr[front]<<endl;

            arr[front] = -1;
            if(front == rear){
                front = rear = -1;
            }
            else if(front == size-1){
                front =  0;
            }else{
                front++;
            }
        }

        void push_back(int data){
            if(isFull()){
                cout<<"Queue is Full "<<endl;
                return;
            }

            if(front == -1){
                front = rear = 0;
            }else if(rear == size-1){ // here i added front != 0 gives error so be care full dont add here
                rear = 0;
            }else{
                rear++;
            }

            arr[rear] = data;
        }


        void pop_back(){
            if(isEmpty()){
                cout<<"Queue is Empty "<<endl;
                return;
            }
            cout<<"pop_back() : "<<arr[rear]<<endl;
            arr[rear] = -1;
            if(front == rear){
                front = rear = -1;
            }else if(rear == 0 && front != size-1){
                rear = size-1;
            }else{
                rear--;
            }

        }


};


int main(){
    Dqueue d(5);
    if(d.isEmpty()){
        cout<<"Queue is Empty "<<endl;
    }else{
        cout<<"Queue is Not Empty "<<endl;
    }

    if(d.isFull()){
         cout<<"Queue is Full "<<endl;
    }else{
        cout<<"Queue is Not Full "<<endl;
    }
    d.push_front(1);
    d.push_front(2);
    d.push_front(3);
    d.push_back(4);
    d.push_back(5);
    d.pop_back();
    d.pop_front();
    
    

}