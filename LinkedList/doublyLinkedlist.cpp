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

void display(struct Node *p){

    while(p){

        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int Length(struct Node *p){

    int sum = 0;
    while(p){
        
        sum+= 1;
        p = p->next;

    }
    return sum;
}

int main(){

    int A[]= {10,20,30,40,50};
    create(A, 5);

    cout << "length of linked list is: " << Length(first) << " " << endl;
    display(first);

    return 0;
}