:q#include<stdio.h>
#include<stdlib.h>
#define N 50

typedef struct Node {
    char c;
    int i;
    double d;
}Node;

typedef struct Stack{
    Node *arr;
    int n;
}stack;

Node* createNode(char cdata, int idata, double ddata) {
    Node* node = (Node *)malloc(sizeof(Node));
    node->c = cdata;
    node->i = idata;
    node->d = ddata;
    
    return node;
}

stack* createStack() {
    stack* st = (stack*)malloc(sizeof(stack));
    st->arr= (Node*)malloc(sizeof(Node) * N);
    st->n=-1;
    
    return st;
}

void push(stack* s, Node* node) {
    
    if(s->n == N ){
        printf("Can't be pushed Overflow occurred\n");
        return;
    }
    
    s->n++;
    s->arr[s->n] = node;
}

Node* pop(stack* s) {
    if(s->n == -1) {
        printf("can't pop already pooooped all :D\n");
        return NULL;
    }
    Node* data = s->arr[s->n];
    s->n--;
    return data; 
}

void main() {
    
    stack* st = createStack();
    Node* firstNode = createNode('a', 1, 2.0);
    int i;
    for(i=1;i<54;i++) {
    push( st, firstNode);
    }
    
    for(i=1;i<54;i++) {
    Node* n = pop(st);
    }
    






    return ;
}
