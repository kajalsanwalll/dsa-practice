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
        top = t;
    }
}

int pop(){

    struct Node *t;
    int x = -1;

    if(top == NULL){
        cout << "stack is empty!" << endl;
    }
    else{

        t = top;
        top = top->next;
        x = t->data;
        delete t;   

    }
    return x;
}

void display(){

    struct Node *p;
    p = top;

    while(p != NULL){

        cout << p->data << " ";
    }
    cout << endl;
}

int main(){


    return 0;
}