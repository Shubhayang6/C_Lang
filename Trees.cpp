#include <stdio.h>
#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

void In_order_DFS(Node *node)
{
    if(node != NULL)
    {
        In_order_DFS(node->left);
        cout << node->data;
        In_order_DFS(node->right);
    }
}

void Pre_order_DFS(Node *node)
{
    if(node != NULL)
    {
        cout << node->data;
        Pre_order_DFS(node->left);
        Pre_order_DFS(node->right);
    }
}

void Post_order_DFS(Node *node)
{
    if(node != NULL)
    {
        Post_order_DFS(node->left);
        Post_order_DFS(node->right);
        cout << node->data;
    }
}


int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "In-order: ";
    In_order_DFS(root);
    cout << endl;

    cout << "Pre-order: ";
    Pre_order_DFS(root);
    cout << endl;

    cout << "Post-order: ";
    Post_order_DFS(root);
    cout << endl;

    return 0;
}