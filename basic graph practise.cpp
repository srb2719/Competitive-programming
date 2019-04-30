#include<vector>
#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *left;
    Node *right;
};

Node* createNode(int key)
{
    Node *node = new Node();
    node->key = key;
    node->left = NULL;
    node->right = NULL;
    return node;
}

int main()
{
    Node *root = createNode(1);
    root->left = createNode(2);
    root->left->left = createNode(4);
    root->right = createNode(3);
    root->right->left = createNode(5);
    cout << root->key<<endl;
    cout << root->left<<endl;
    return 0;
}