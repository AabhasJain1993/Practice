#include<iostream>

using namespace std;

//Construct tree using inorder and level order traversals

/* A binary tree node */
struct Node
{
    int key;
    struct Node* left, *right;
};

void printInorder(Node* node)
{
    if (node == NULL)
       return;
    printInorder(node->left);
    cout << node->key << " ";
    printInorder(node->right);
}

int searchInInorder(int in[], int level[], int index, int n) {

    int i;
    for(i=0;i<n;i++) {
        if(in[i] == level[index] )
            break;
    }
    
    return i;

}

Node* newNode(int data) {
    Node* node = new Node();
    node->key = data;
    node->left = node->right = NULL;
    return node;

}

Node* buildTree(int in[], int level[], int inStartIndex, int inEndIndex, int n) {

    static int levelIndex  = 0 ;

    if(inStartIndex > inEndIndex || levelIndex >= n) {
        return NULL;
    }
    cout<<"LEVELiNDEX : "<<levelIndex<<endl;
    
    
    Node* root = newNode(level[levelIndex]);
    cout<<"Searching : "<<level[levelIndex]<<endl;   
    int index  = searchInInorder(in, level, levelIndex, n);
    
    
    levelIndex +=1;
    
    if(inStartIndex == inEndIndex) {
        return root;
    }
    
    
    
    cout<<"Search Index : "<<index<<endl;   
    
    root->left = buildTree(in, level, inStartIndex, index -1, n);
    root->right = buildTree(in, level, index + 1, inEndIndex, n);
    
    return root;

}



int main() {

    int in[]    = {4, 8, 10, 12, 14, 20, 22};
    int level[] = {20, 8, 22, 4, 12, 10, 14};
    int n = sizeof(in)/sizeof(in[0]);
    Node *root = buildTree(in, level, 0, n - 1, n);
 
    /* Let us test the built tree by printing Insorder traversal */
    cout << "Inorder traversal of the constructed tree is \n";
    printInorder(root);









    return 0;
}
