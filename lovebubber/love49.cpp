#include<bits/stdc++.h>
using namespace std;
 // Merge Two Sorted Linked List T.C => O(n) , S.C => O(n)
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
// in love53 there is optimise code of below code.
Node* MergeLL(Node* &head1, Node* &head2){

    Node* merge = new Node(0);
    Node* tail = merge;
    Node* temp1 = head1;
    Node* temp2 = head2;
    Node* save = head1;
    int cnt =0;

    while (temp1 !=NULL && temp2 != NULL)
    {
           
            
        if(temp1->data  <  temp2->data) {
           
            merge->next = temp1;
            merge = temp1;            
            save = temp1;
            temp1 = temp1->next;
            save->next = NULL;           
        }else{
            
            merge->next = temp2;
            merge = temp2;
            save = temp2;
            temp2 = temp2->next;
            save->next = NULL;            
        }
        cnt++;
       
        
    }

    if(temp1 != NULL){
        merge->next = temp1;
    }

    if(temp2 != NULL){
       
        merge->next = temp2;
    }

    tail = tail->next;
    return tail;  


}

Node* solve(Node* &first,Node* &second){

    if(first->next == NULL){
        first->next = second;
        return first;
    }
    Node* curr1 = first;
    Node* next1 = first->next;
    Node* curr2 = second;
    Node* next2 = second->next;
    
    while (curr2 != NULL && next1 != NULL)
    {
        if(curr1->data <= curr2->data && curr2->data < next1->data){
           curr1->next = curr2;
           next2 = curr2->next;
           curr2->next = next1;

            curr1 = curr2;
            curr2 = next2; 

        }else{
            curr1 = next1;
            next1 = curr1->next;
            if(next1 == NULL){
                curr1->next = curr2;
                return first;
            }
        }
    }
    return first;



}
Node* MergeInOofone(Node* &head1, Node* &head2){
    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }
    Node* first = head1;
    Node* second = head2;
    if(head1->data <= head2->data){
      return  solve(first,second);
    }else{
       return solve(second ,first);
    }


}
int main(){

    Node* node1  = new Node(1);
    Node* head1 = node1;
    Node* tail1 = node1;
    insert(tail1,3);
    insert(tail1,5);
    // insert(tail1,7);
    // insert(tail1,9);

    Node* node2  = new Node(2);
    Node* head2 = node2;
    Node* tail2 = node2;   
    insert(tail2,4);
    insert(tail2,6);



    print(head1);
    print(head2);

    // in T.C O(n) , S.C. O(n)
    // Node* head3 = MergeLL(head1,head2);
    // print(head3);

    // in T.C O(n) , S.C. O(1)
    Node* ans = MergeInOofone(head1,head2);
    print(ans);

}



