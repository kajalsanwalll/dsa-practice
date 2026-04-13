#include <iostream>
using namespace std;

struct Node{

    int data;
    struct Node *next;
}*Head;

void create(int A[], int n){

    int i;
    struct Node *t, *last;
    Head = new Node;
    Head->data = A[0];
    Head->next = Head;
    last = Head;

    for(i=1;i<n;i++){
        t = new Node;
        t->data = A[i];
        t->next = last->next;
        last->next = t;
        last = t;
    }
}

void Display(struct Node *h){

    do{
        cout << h->data;
        h = h->next;
    }while(h != Head);
    
    cout << endl;

}

int main(){

    int A[] = {2,4,6,8,10};
    create(A,5);

    return 0;
}