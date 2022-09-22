#include<iostream>
#include<queue>
using namespace std;
// Construct Tree , Traversal of tree by level order , build tree by level order , inorder(LNR),preOrder(NLR),postOrder(LRN)
class Node{
    public:
        int data;
        Node* left;
        Node* right;
    Node(int  data){
        this->data =  data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* buildTree(Node* root){
    cout<<"Enter Data \n";
    int data;
    cin>>data;
    root = new Node(data);

    if(data == -1){
        root = NULL;
        return root;
    }
   // 1 7 2 -1 -1 6 5 -1 -1 11 -1 -1 9 -1 9 5 -1 -1 -1
    cout<<"Enter data for left size of :"<<data<<endl;   
    root->left = buildTree(root->left);
    cout<<"Enter data  for right side  of : "<<data<<endl;
    root->right = buildTree(root->right);
    return root;
}


void buildTreeFromLevelOrderTraversal(Node* &root){
    queue<Node*>q;
    cout<<"Enter data \n";
    int data;
    cin>>data;
    root = new Node(data);
    
    q.push(root);
    while (!q.empty())
    {
        Node* temp = q.front();
        q.pop();

        cout<<"Enter data for left side of :"<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;

        if(leftdata != -1){
            temp->left = new Node(leftdata);
            q.push(temp->left);
        }


         cout<<"Enter data for right side of :"<<temp->data<<endl;
        int rightdata;
        cin>>rightdata;

        if(rightdata != -1){
            temp->right = new Node(rightdata);
            q.push(temp->right);
        }
    }
    
}

void levelOrderTravesal(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node* temp = q.front();
        q.pop();
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }       
        
    }
    
}

// Traversal of tree : InOrder,PreOrder,PostOrder 
void InOrder(Node* root){
    if(root == NULL){
        return;
    }
    InOrder(root->left);
    cout<<root->data<<" ";
    InOrder(root->right);
}

void PreOrder(Node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    PreOrder(root->left);
    PreOrder(root->right);
}

void PostOrder(Node* root){
    if(root == NULL){
        return;
    }
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<" ";
}




int  main(){
    Node *root = NULL;
    // root =  buildTree(root);
    buildTreeFromLevelOrderTraversal(root);
    levelOrderTravesal(root);
}
