#include <iostream>
using namespace std;

struct Node{

    struct Node *prev;
    int data;
    struct Node *next;

} *first = NULL;

void create(int A[], int n){

    struct Node *t, *last;
    int i;

    first = new Node;
    first->data = A[0];
    first->prev = first->next = NULL;
    last = first;

    for(i=1; i<n ; i++){

        t = new Node;
        t->data = A[i];

        t->next = last->next;
        t->prev = last;
        last->next = t;
        last = t;
    }
}

int main(){


    return 0;
}