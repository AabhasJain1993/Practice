#include<iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* createNode(int val) {
    Node* node = new Node();
    node->data = val; 
    node->next = NULL;
    
    return node;
}

Node* reverse_in_group(Node* head, int k) {
    
    Node* current = head;
    Node* prev = NULL;
    Node* nextNode;
    
    if(current == NULL || current->next == NULL) {
        return current;
    }
    
    int i=1;
    
    while(current != NULL && i <= k) {
        nextNode = current->next;
        current->next = prev;
        prev = current; 
        current = nextNode;
        i++;
    }
    
    head->next = reverse_in_group(current, k);
    
    return prev;
}

int main() {    
    
  Node* head;
  head = createNode(1);
  head->next = createNode(2);
  head->next->next = createNode(3);
  head->next->next->next = createNode(4);
  head->next->next->next->next = createNode(5);
  head->next->next->next->next->next = createNode(6);
  head->next->next->next->next->next->next = createNode(7);
  head->next->next->next->next->next->next->next = createNode(8);
  head->next->next->next->next->next->next->next->next = createNode(9);
  head->next->next->next->next->next->next->next->next->next = createNode(10);
  head->next->next->next->next->next->next->next->next->next->next = createNode(11);
  
  head = reverse_in_group(head, 3);
  
  Node* current = head;
  while(current != NULL) {
    cout<<current->data<<" ";
    current = current->next;
  }
  
  return 0;
}
