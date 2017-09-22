#include<bits/stdc++.h>

using namespace std;
struct Node {
    int data;
    Node* next;
};

Node* newNode(int val) {
    
    Node *node= new Node();
    node->data = val;
    node->next = NULL;

    return node;
}

void heapify(vector < Node* > &arr, int index, int n) {


   int left = 2*index + 1;
   int right = 2*index + 2;
   int minIndex = index;
    
    if(arr[left]->data < arr[minIndex]->data && left < n) {
        minIndex = left;
    }

    if( arr[right]->data < arr[minIndex]->data && right < n) {
        minIndex = right;
    }
    
    if(minIndex != index) {
        
        Node* temp = new Node();
        temp = arr[minIndex];
        arr[minIndex] = arr[index];
        arr[index] = temp;
        //heapify(arr, minIndex, n);   
    }
}


Node* mergeKSortedLists(Node** arr, int k) {
    
    vector<Node* > heap;
    
    for(int i=0;i<k;i++) {
        heap.push_back(arr[i]);
    }
    
    int N = heap.size();
    for(int i=N/2 -1; i >= 0; i--) {
        //heapify(heap, i, N);
    
    }
    Node *head =NULL; Node* currPtr = head;
    while(heap.size()!=0) {
        if(head == NULL) {
            head = heap[0];
            currPtr = head;
        } else {
            currPtr->next = heap[0];
            currPtr = currPtr->next; 
        }
        
        if(heap[0]->next!= NULL) {
            heap.push_back(heap[0]->next);
        }
        
        heap.erase(heap.begin());
  
        int currIndex = heap.size() - 1;
        int parentIndex = (currIndex - 1)/2;
         
        while(parentIndex > 0 && heap[parentIndex]->data > heap[currIndex]->data ) {            
            Node* temp = new Node();
            temp = heap[parentIndex];
            heap[parentIndex] = heap[currIndex];
            heap[currIndex] = temp;
            
            currIndex = parentIndex;
            
            parentIndex = (currIndex - 1)/2;  
        }
        
    }
    
    return head;
        
}


int main() {
    int k = 3; // Number of linked lists
    int n = 4; // Number of elements in each list
 
    // an array of pointers storing the head nodes
    // of the linked lists
    Node* arr[k];
 
    // creating k = 3 sorted lists
    arr[0] = newNode(1);
    arr[0]->next = newNode(3);
    arr[0]->next->next = newNode(5);
    arr[0]->next->next->next = newNode(7);
 
    arr[1] = newNode(2);
    arr[1]->next = newNode(4);
    arr[1]->next->next = newNode(6);
    arr[1]->next->next->next = newNode(8);
 
    arr[2] = newNode(0);
    arr[2]->next = newNode(9);
    arr[2]->next->next = newNode(10);
    arr[2]->next->next->next = newNode(11);
 
    // merge the k sorted lists
    Node* head = mergeKSortedLists(arr, k);
 
    // print the merged list
   // printList(head);

    return 0;
}
