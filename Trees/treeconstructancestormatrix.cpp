#include<iostream>

using namespace std;

//Construct Tree from Ancestor Matrix

struct Node
{
    int data;
    Node *left, *right;
};
 
/* Helper function to create a new node */
Node* newNode(int data)
{
    Node* node = new Node;
    node->data = data;
    node->left = node->right = NULL;
    return (node);
}

void printInorder(Node* node)
{
    if (node == NULL)
        return;
    printInorder(node->left);
    printf("%d ", node->data);
    printInorder(node->right);
}

int main() {
    
    int mat[N][N] = {{ 0, 0, 0, 0, 0, 0 },
                     { 1, 0, 0, 0, 1, 0 },
                     { 0, 0, 0, 1, 0, 0 },
                     { 0, 0, 0, 0, 0, 0 },
                     { 0, 0, 0, 0, 0, 0 },
                     { 1, 1, 1, 1, 1, 0 }};

    
    Node* root = ancestorTree(mat);











    return 0;
}
