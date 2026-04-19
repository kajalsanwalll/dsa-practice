#include <iostream>
using namespace std;

struct Node{

    int data;
    struct Node *next;
}*front = NULL, *rear = NULL;

void enqueue(int x){

    struct Node *t;
    t = new Node;

    if(t == NULL){
        cout << "queue is full";
    }
    else{

        t->data =x;
        t->next = NULL;
        if(front==NULL){
            front=rear = t;
        }else{

            rear->next = t;
            rear = t;
        }
    }
}

int dequeue(){

    int x = -1;
    struct Node *t;

    if(front == NULL){
        cout << "queue is empty!";
    }
    else{
        x = front->data;
        t = front;
        front = front->next;
        delete t;
    }
    return x;
}

void Display(){

    struct Node *p;

    while(p!= NULL){

        cout << p->data;
        p = p->next;
    }
    cout << endl;
}

int main(){


    return 0;
}