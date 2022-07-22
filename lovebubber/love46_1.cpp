#include<bits/stdc++.h>
using namespace std;
///Q1 check List is Circular or not
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
bool isCircular(Node* &head){
    if(head ==  NULL){
        return true;
    }

    Node* temp = head->next;

    while (temp != NULL && temp != head)
    {
        temp = temp->next;
    }
    
    if(temp == NULL){
        return false;
    }
    else{
        return true;
    }

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

    bool check = isCircular(head);
   if(check){
    cout<<"Circular Linked List !"<<endl;
   }else{
    cout<<"Not a Circular Linked List \n";
   }
    return 0;
}


