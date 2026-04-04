#include <iostream>
using namespace std;

struct Node{

    int data;
    struct Node *next;     //self referential structure

}*first = NULL;

void create(int A[], int n){

    int i;
    struct Node *t,*last;

    first= new Node;
    first->data = A[0];
    first->next = NULL;

    last = first;

    for(i=1;i<n;i++){

        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        
        last = t;
    }


}

void display(struct Node *p){

    while(p != 0){

        cout << p->data << " ";
        p = p->next;             //traversing through Node

    }
    cout << endl;

}

//display linkedlist using recursion
void RDisplay(struct Node *p){

    if(p != NULL){
        cout << p->data << endl;
        RDisplay(p->next);
    }
}

int count(struct Node *p){

    int l=0;

    while(p != 0){
        l++;
        p=p->next;
    }

    return l;
}

int Add(struct Node *p){

    int sum=0;
    
    while(p != 0){

        sum+= p->data;
        p=p->next;
    }

    return sum;
}

int Max(struct Node *p){

    int m = -32768;

    while(p != 0){

        if(p->data > m){
            m = p->data;

            p=p->next;
        }

    }

    return m;
}

int main(){

    int A[] = {3,5,7,10,15};

    create(A,5);
    display(first);
    RDisplay(first);
    cout << "length is: " << count(first) << endl;
    cout << "sum is: " << Add(first) << endl;
    cout << "max is: " << Max(first) << endl;

    return 0;
}