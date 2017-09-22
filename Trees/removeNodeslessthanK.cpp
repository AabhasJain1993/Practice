#include<iostream>

using namespace std;

struct Node
{
    int data;
    Node *left, *right;
};
 
//New node of a tree
Node *newNode(int data)
{
    Node *node = new Node;
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

//Method to print the tree in inorder fashion.
void printInorder(Node *root)
{
    if (root)
    {
        printInorder(root->left);
        cout << root->data << " ";
        printInorder(root->right);
    }
}

Node* removeShortPathNodesUtil(Node* root, int k , int sum) {
    
    if( root == NULL) {
        return NULL;
    }
    
    if(root->left == NULL && root->right == NULL) {
        if(sum < k)
    
    }


}

Node* removeShortPathNodes(Node* root, int k) {

    removeShortPathNodesUtil(root, k, 0);

}

int main() {
  int k = 4;
    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->left->left->left = newNode(7);
    root->right->right = newNode(6);
    root->right->right->left = newNode(8);
    cout << "Inorder Traversal of Original tree" << endl;
    printInorder(root);
    cout << endl;
    cout << "Inorder Traversal of Modified tree" << endl;
    Node *res = removeShortPathNodes(root, k);
    printInorder(res);
    return 0;



    return 0;
}
