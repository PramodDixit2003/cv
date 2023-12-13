#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

void insert(Node **root, int data)
{
    while (*root != nullptr)
    {
        if ((*root)->data > data)
        {
            root = &(*root)->left;
        }
        else
        {
            root = &(*root)->right;
        }
    }
    *root = new Node(data);
}

void inOrderTraversal(Node *root)
{
    if (root)
    {
        cout << root->data << " ";
        inOrderTraversal(root->left);

        inOrderTraversal(root->right);
        }
}

int main()
{
    Node *root = new Node(50);
    insert(&root, 30);
    insert(&root, 20);
    insert(&root, 40);
    insert(&root, 35);
    insert(&root, 60);
    insert(&root, 65);
    insert(&root, 70);
    inOrderTraversal(root);
}
