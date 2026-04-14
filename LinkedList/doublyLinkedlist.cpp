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

void insert(struct Node *p, int index, int x){

    struct Node *t = new Node;
    int i;

    if(index < 0 || index > Length(p)){
        return;
    }
    if(index ==0){

        t = new Node;
        t->data = x;
        t->prev = NULL;
        t->next = first;
        first->prev = t;
        first = t;
    }
    else{

        for(i=0; i< index -1; i++){

            p = p->next;
        }
        t = new Node;
        t->data = x;
        t->next = p->next;
        t->prev = p;
        if(p->next){
            p->next->prev = t;
        }
        p->next = t;
    }
}

int Delete(struct Node *p, int index){

    struct Node *q;
    int x = -1, i;

    if(index < 0 || index > Length(p)){
        return -1;
    } 

    if(index == 1){
        
        first = first->next;
        if(first){
            first->prev = NULL;
        }

        x= p->data;
        delete p;

    }
    else{
        for( i=0; i< index -1; i++){
            p = p->next;
        }

        p->prev->next = p->next;

        if(p->next){
            p->next->prev = p->prev;
        }

        x = p->data;
        delete p;
    }
    return x;
}

int main(){

    int A[]= {10,20,30,40,50};
    create(A, 5);

    insert(first, 3, 7);
    Delete(first,1);

    cout << "length of linked list is: " << Length(first) << " " << endl;
    display(first);


    return 0;
}