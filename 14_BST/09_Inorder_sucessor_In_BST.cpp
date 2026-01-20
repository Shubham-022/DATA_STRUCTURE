//have to find inorder succesor in BST
//two approaches
// 1)store inorder and then print succesor...bacause inorder of BST is sorted array
//  2)find the node and then find min value in right subtree of that node(solve below)

//2nd approach does not follow if (jiska succesor find kr rhe vo agr leaf node ho to )



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

    void minValInBST(Node*root)
    {
        Node*temp=root;

        if(root==NULL)
        {
            cout<<"store inorder then find successor for leaf node"<<endl;
            return;
        }
        while(temp->left!=NULL)
        {
            temp=temp->left;
        }
        cout<<"sucessor is ";
        cout<<temp->data;

    }

    void searchInBSTforsucessor(Node*root,int target){
        
        if(root==NULL)
        {
            return;

        }

        if(root->data==target)
        {
             minValInBST(root->right);
             return;
        }

        if(root->data>target){
            searchInBSTforsucessor(root->left,target);
            return;
        }
        else{
             searchInBSTforsucessor(root->right,target);
             return;
        }
    }

    int main(){
        Node*root=NULL;

        cout<<"Enter the data to create BST"<<endl;

        buildBST(root);
        levelOrderTraversal(root);

        int target;
        cout<<"Enter the data to find predecessor "<<endl;
        cin>>target;
        //search in BST

       searchInBSTforsucessor(root,target);
        



        
    }