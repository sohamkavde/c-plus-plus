#include<bits/stdc++.h>
using namespace std;
///Q1 Reverse Singly linked list
//Q2 Find the middle of Singly list element
class Node{
    public: 
        int data;
        Node* add;
        Node(int data){
            this->data = data;
            this->add = NULL;
        }
};

void insertAttail(Node* &tail,int  data){
    Node* temp = new Node(data);
    tail->add = temp;
    tail  = temp;
}

void print(Node* head){
    Node* temp = head;
    while (temp !=  NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->add;
    }
    cout<<"\n";    

}

// Reverse Linked List through recursion
void rev(Node* &head,Node* &mainhead){
    Node* prev = head;
    Node* curr = prev->add;
    if(curr == NULL){
        mainhead = prev;
        return;
    }
    rev(curr,mainhead);
    curr->add = prev;  
}
void reverseNode(Node* &head){ 
    Node* temp = head;   
    rev(head,head);
    temp->add = NULL;
    
}

// find middle Node
void middleNode(Node* &head){
    Node* temp = head;
    Node* curr = temp;
    while (temp->add != NULL)
    {
        temp = temp->add;
        if(temp->add != NULL){
            temp = temp->add;
        }
        curr = curr->add;        
    }
    cout<<curr->data<<" \n";
}
int main(){
    Node* node1  = new Node(1);
    Node* head = node1;
    Node* tail = node1;

    insertAttail(tail,2);
    print(head);

    insertAttail(tail,3);
    print(head);

    insertAttail(tail,4);
    print(head);

    insertAttail(tail,5);
    print(head);

    insertAttail(tail,6);
    print(head);

    insertAttail(tail,7);
    print(head);

    reverseNode(head);   
    print(head);


    middleNode(head);

    return 0;
}


