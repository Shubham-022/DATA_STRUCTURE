
//have to find inorder predecessor in BST
//two approaches
// 1)store inorder and then print predecessor...bacause inorder of BST is sorted array
//  2)find the node and then find max value in left subtree of that node(solve below)

//2nd approach does not follow if (jiska predecessor find kr rhe vo agr leaf node ho to )


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

    void maxValInBST(Node*root)
    {
        Node*temp=root;

        if(root==NULL)
        {
            cout<<"store inorder then find predecessor for leaf node"<<endl;
            return;
        }
        while(temp->right!=NULL)
        {
            temp=temp->right;
        }
        cout<<"predecessor is ";
        cout<<temp->data;

    }

    void searchInBSTforPredeccessor(Node*root,int target){
        
        if(root==NULL)
        {
            return;

        }

        if(root->data==target)
        {
             maxValInBST(root->left);
             return;
        }

        if(root->data>target){
            searchInBSTforPredeccessor(root->left,target);
            return;
        }
        else{
             searchInBSTforPredeccessor(root->right,target);
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

       searchInBSTforPredeccessor(root,target);
        



        
    }