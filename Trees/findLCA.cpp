#include<iostream>

using namespace std;

struct Node {
    
    int data;
    Node* left;
    Node* right;
}Node;

Node* newNode(int val) {
    Node* node = new Node();
    node->data = val;
    node->left = node->right = NULL;
    return node;
}

Node* findLCAutil(Node* root, int val1, int val2, bool &v1, bool &v2) {



}

Node* findLCA(node* root, int val1, int val2) {

bool v1 = false, v2 = false;
Node* lca = findLCAutil(root, n1, n2, v1, v2);





}



int main() {
    
    Node * root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    Node *lca =  findLCA(root, 4, 5);
    if (lca != NULL)
       cout << "LCA(4, 5) = " << lca->key;
    else
       cout << "Keys are not present ";
 
    lca =  findLCA(root, 4, 10);
    if (lca != NULL)
       cout << "nLCA(4, 10) = " << lca->key;
    else
       cout << "nKeys are not present ";
 



    return 0;
}
