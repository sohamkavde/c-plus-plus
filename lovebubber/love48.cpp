#include<bits/stdc++.h>
using namespace std;
///Q1 Remove Duplicates in sorted array
class Node{
    public: 
        int data;
        Node* next;
        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

void insertAttail(Node* &tail,int  data){
    Node* temp = new Node(data);
    tail->next = temp;
    tail  = temp;
}

void print(Node* head){
    Node* temp = head;
    while (temp !=  NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<"\n";    

}


void removeDup(Node* &head){
    Node* temp = head;

    while (temp != NULL)
    {
        if(temp->next != NULL && temp->data == temp->next->data){  // check for curr->next bhi null n ho yaha code fat gya tha
            Node* save = temp->next;
            temp->next = temp->next->next;
            delete save;
        }else{
            temp = temp->next;
        }
    }
    
}

int main(){
    Node* node1  = new Node(1);
    Node* head = node1;
    Node* tail = node1;

    insertAttail(tail,2);
    print(head);

    insertAttail(tail,2);
    print(head);

    insertAttail(tail,2);
    print(head);

    insertAttail(tail,3);
    print(head);

    insertAttail(tail,3);
    print(head);

    insertAttail(tail,7);
    print(head);

    // Remove  Duplicate from sorted Array
    removeDup(head);
    print(head);
    return 0;
}


