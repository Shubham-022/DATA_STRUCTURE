#include<iostream>
#include<queue>
using namespace std;
class  Node{
    public:
    int data;
    Node*left;
    Node*right;

    Node(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
};

Node*insertIntoBST(Node*root,int data){
    if(root==NULL)
    {
        root=new Node(data);
        return root;
    }

    if(data<root->data)
    {
        root->left=insertIntoBST(root->left,data);

    }
    else{
        root->right=insertIntoBST(root->right,data);
    }
    return root;


}

    void buildBST(Node*&root){
       int data;
        cin>>data;


        while(data!=-1)
        {
            root=insertIntoBST(root,data);
            cin>>data;
        }
    }

    void Inorder(Node*root){

          if(root == NULL) return;
           
        Inorder(root->left);
        cout<<root->data<<" ";
        Inorder(root->right);
    }

    int main(){
        Node*root=NULL;

        cout<<"Enter the data to create BST"<<endl;

        buildBST(root);

        Inorder(root);
        
    }