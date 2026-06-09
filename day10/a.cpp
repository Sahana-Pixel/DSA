#include <iostream>
using namespace std;
#include<bits/stdc++.h>
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

// in left root right
// pre root left right
// post left right root

void inorder(Node* root)
{
    if(!root) return;
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);
    
}

void preorder(Node* root)
{
    if(!root) return;
    cout<<root->data;
    inorder(root->left);
    inorder(root->right);
    
}

void postorder(Node* root)
{
    if(!root) return;
    
    inorder(root->left);
    inorder(root->right);
    cout<<root->data;
    
}

void bfs(Node* root)
{
    if(root == nullptr) return;

    queue<Node*> q;
    q.push(root);

    while(!q.empty())
    {
        Node* curr = q.front();
        q.pop();

        cout << curr->data << " ";

        if(curr->left)
            q.push(curr->left);

        if(curr->right)
            q.push(curr->right);
    }
}


int main() {
    // Creating nodes
    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    inorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;

  
    

    cout << root->data << endl;              // 1
    cout << root->left->data << endl;        // 2
    cout << root->right->data << endl;       // 3
    cout << root->left->left->data << endl;       // 3

    return 0;
}