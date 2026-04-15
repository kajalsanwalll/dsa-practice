#include <iostream>
using namespace std;

struct Node{

    int data;
    struct Node *next;  
} *top = NULL;

void push(int x){

    struct Node *t;
    t = new Node;

    if(t== NULL){

        cout << "stack is full" << endl;
    }
    else{

        t->data = x;
        t->next = top;
    }
}

int main(){


    return 0;
}