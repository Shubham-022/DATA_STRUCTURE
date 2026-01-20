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

    void levelOrderTraversal(Node*root){

          if(root == NULL) return;
        queue<Node*>q;
        q.push(root);
        q.push(NULL);

        while(!q.empty()){
            Node*temp=q.front();
            q.pop();
            if(temp==NULL){
                cout<<endl;
                if(!q.empty()){
                    q.push(NULL);
                }
                continue;
            }

            cout<<temp->data<<" ";

            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }

    bool searchInBST(Node*root,int target){
        
        if(root==NULL)
        {
            return false;

        }

        if(root->data==target)
        {
            return true;
        }

        if(root->data>target){
            return searchInBST(root->left,target);
        }
        else{
            return searchInBST(root->right,target);
        }
    }

    int main(){
        Node*root=NULL;

        cout<<"Enter the data to create BST"<<endl;

        buildBST(root);
        levelOrderTraversal(root);

        int target;
        cout<<"Enter the data to be searched "<<endl;
        cin>>target;
        //search in BST

        if(searchInBST(root,target))
        {
            cout<<"Present "<<endl;
        }
        else{
            cout<<"Not Present "<<endl;
        }



        
    }