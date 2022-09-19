 #include<bits/stdc++.h>
using namespace std;
///Q1 Reverse Singly linked list in Group of K = 3
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

// Reverse Linked List through recursion

Node* kreverse(Node* &head,int k){ 
    Node* prev = NULL;   
    Node* curr = head;
    Node* next = NULL;
    int count = 0;
    while (curr != NULL && count<k)
    {
       next = curr->next;
       curr->next = prev;
       prev = curr;
       curr = next;
       count++;
    }
    

    if(next != NULL){
        head->next = kreverse(next,k);
    }

    return prev;
    
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

    Node* ans = kreverse(head,3); // k=3   
    print(ans);

    return 0;
}


