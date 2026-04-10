#include <iostream>
#include <climits>
#include <stdio.h>
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

    int m = INT_MIN;

    while(p != 0){

        if(p->data > m){

            m = p->data;
        }

        p=p->next;

    }
    return m;
}

int Min(struct Node *p){

    int m = INT_MAX;

    while(p != 0){

        if(p->data < m){
            m = p->data;

        }

        p=p->next;
    }

    return m;
}

struct Node * LSearch(struct Node *p, int key){

    struct Node *q=NULL;  // another pointer for move to front

    while(p != NULL){
        if(key == p->data){

            q->next = p->next;
            p->next = first;
            first = p;
            return p;
        }
        else{
            q=p;
            p= p->next;
        }
    }
    return NULL;
}

void Insert(struct Node *p1,int pos, int x){

    struct Node *t;

    if(pos < 0 || pos > count(p1)){
        return;
    }

    if(pos == 0){
        t = new Node;
        t->data = x;
        t->next = first;
        first= t;
    }
    else if(pos > 0){

        p1= first;
        for(int i=0; i< pos-1 && p1;i++){
            p1= p1->next;
        }

        if(p1){
            t= new Node;
            t->data = x;
            t->next = p1->next;
            p1->next = t;
        }
    }
}

void SortedInsert(struct Node *p, int x){

    struct Node *t , *q = NULL;
    t = new Node;
    t->data = x;
    t->next = NULL;

    if(first == NULL){
        first=t;
    }
    else{

        while(p && p->data < x){
            q=p;
            p=p->next;
        }
        if(p==first){
            t->next = first;
            first=t;
        }
        else{

            t->next = q->next;
            q->next=t;
        }
    }
}

int Delete(struct Node *p, int index){
    
    struct Node *q;
    int x=-1, i;

    if(index <1 || index > count(p)){
        return -1;
    }

    if(index == 1){
        q=first;
        x = first->data;
        first = first->next;
        delete q;
        return x;
    }
    else{

        for(i=0;i<index -1 ; i++){

            q=p;
            p= p->next;

        }
        q->next = p->next;
        x= p->data;
        delete p;
        
        return x;
    }

}

int isSorted(struct Node *p){

    int x = INT_MIN;

    while (p != NULL)
    {
        if(p->data < x){
            return false;
        }

        x = p->data;
        p = p->next;

    }
    return true;
}

void RemoveDuplicates(struct Node *p){

    struct Node *q = p->next;

    while(q!= NULL){

        if(p->data != q->data){

            p = q;
            q = q->next;
        }
        else{

            p->next = q->next;
            delete q;
            q= p->next;
        }
    }
}

void Reverse1(struct Node *p){
    
    int *A, i=0;
    struct Node *q= p;
    A = new int[count(p)];

    while (q!=NULL)
    {
        A[i] = q->data;
        q= q->next;
        i++;
    }
    q=p; i--;

    while(q!=NULL){
        q->data = A[i];
        q = q->next;
        i--;
    }
    
}

int main(){

    struct Node *temp;
    int A[] = {3,5,7,10,15};

    create(A,5);
    display(first);
    RDisplay(first);
    cout << "length is: " << count(first) << endl;
    cout << "sum is: " << Add(first) << endl;
    cout << "max is: " << Max(first) << endl;
    cout << "min is: " << Min(first) <<endl;

   // temp = LSearch(first,10);
   // if(temp){
   //     cout << "key is found " << temp->data << endl;
   // }
   // else{
   //     cout << "key not found" << endl; 
   // }
    //display(first);
    //Insert(first,3,9);
   // cout << endl;
    //display(first);

    cout << "sorted insertion: " << endl;
    SortedInsert(first,10);
    display(first);

    //cout << "delete 4th index" << endl;
    //Delete(first,4);
    //display(first);

    if(isSorted(first)){
        cout << "sorted" << endl;
    }
    else {
        cout << " not sorted " << endl;
    }

    RemoveDuplicates(first);
    display(first);

    cout << "reverse linked list" << endl;
    Reverse1(first);
    display(first);

    return 0;
}