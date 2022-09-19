#include<bits/stdc++.h>
using namespace std;
 // check palindrom in list
class Node{
    public:
        int data;
        Node* next;
        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

void insert(Node* &tail,int data){
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp;    
}


void print(Node* &head)
{
    Node* temp  = head;

    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    
}

Node* reverse(Node* slow){
    Node* prev = NULL;
    Node* curr = slow;
    Node* next = NULL;
    while (curr!=NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
    
}

bool CheckPalindrom(Node* head){
    if(head->next == NULL){
        return true;
    }
    Node* slow = head;
    Node* fast = head;

    while (slow->next != NULL && fast->next != NULL)
    {
        fast = fast->next;
        if(fast->next != NULL){
            fast = fast->next;
        }

        slow = slow->next;
    }
    Node* temp = slow->next;
    slow->next = reverse(temp);
   
   Node* head1 = head;
   Node* head2 = slow->next;
   while (head2 != NULL)
   {
    if(head1->data != head2->data){
        return false;
    }
    head1 = head1->next;
    head2 = head2->next;
   }

return true;
   
    
}

int main(){

    Node* node  = new Node(1);
    Node* head = node;
    Node* tail = node;
    insert(tail,3);
    insert(tail,3);
    insert(tail,3);
    insert(tail,1);

    if(CheckPalindrom(head)){
        cout<<"Given List is Palindrom\n";
    }else{
        cout<<"Not A Palindrom \n";
    }

}



