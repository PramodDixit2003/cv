#include<iostream>
using namespace std;
class Node
{
    public:
    int val;
    Node* left;
    Node* right;
    
    Node(int val)
    {
        this->val=val;
        this->left=nullptr;
        this->right=nullptr;
    }
};
Node* insert(Node* root,int val)
{
    if(root==nullptr)
    {
        return new Node(val);
    }
    else
    {
        if(root->val<=val)
        {
            root->left=insert(root->left,val);
        }
        else
        {
            root->right=insert(root->right,val);
        }
        return root;
    }
}

void display(Node* root)
{
    if(root!=nullptr)
    {
        cout<<root->val<<" ";
        display(root->left);
        display(root->right);
        
    }
}
int main()
{
    Node* root=nullptr;
    root=insert(root,6);
    root=insert(root,7);
    root=insert(root,9);
    display(root);
}
