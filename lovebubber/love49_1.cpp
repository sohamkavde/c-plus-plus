#include<bits/stdc++.h>
using namespace std;

// Re Arrange List in order of 0 , 1, 2 respectively
class Node{
    public:
        int data;
        Node* next;

        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

void InsertAtTail(Node* &tail,int data){
    Node* newnode = new Node(data);
    tail->next = newnode;
    tail = newnode;
}

void print(Node* head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;        
    }
    cout<<"\n";
}
Node* ReArrange(Node* &head){
    // Create Three Node
    Node* ZeroHead = new Node(-1);
    Node* ZeroTail = ZeroHead;
    Node* OneHead = new Node(-1);
    Node* OneTail = OneHead;
    Node* TwoHead = new Node(-1);
    Node* TwoTail = TwoHead;

    // Create a pointer who point to Actual list
    Node* temp = head;

    while (temp != NULL)
    {
        if(temp->data == 0){
            InsertAtTail(ZeroTail,0);
        }else if (temp->data == 1){
            InsertAtTail(OneTail,1);
        }else if(temp->data == 2){
            InsertAtTail(TwoTail,2);            
        }
        temp = temp->next;
    }


    if(OneHead->next == NULL){
        ZeroTail->next = TwoHead->next; 
    }else{
        ZeroTail->next = OneHead->next;      
    }
    OneTail->next = TwoHead->next;
    TwoTail->next = NULL;

    head = ZeroHead->next;

    delete ZeroHead;
    delete OneHead;
    delete TwoHead;   
    
    return head;
}




int main(){
    Node* node1 = new Node(1);
    Node* head = node1;
    Node* tail = node1;

    InsertAtTail(tail,0);
    print(head);

    InsertAtTail(tail,0);
    print(head);

    InsertAtTail(tail,1);
    print(head);
    InsertAtTail(tail,2);
    print(head);

    InsertAtTail(tail,1);
    print(head);

    InsertAtTail(tail,2);
    print(head);


    
    print(ReArrange(head));
}

