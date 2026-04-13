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
        cout << h->data << " ";
        h = h->next;
    }while(h != Head);

    cout << endl;

}

//recursive display
void RDisplay(struct Node *p){

    static int flag = 0;

    if(p!= Head || flag == 0){

        flag = 1;
        cout << p->data << " ";

        RDisplay(p->next);
    }
    flag = 0;
}

void Insert(struct Node *p, int index, int x){

    struct Node *t;
    int i;

    if(index == 0){

        t = new Node;
        t->data = x;

        if(Head == NULL){
            Head = t;
            Head->next = Head;
        }
        else{

            while (p->next != Head)
            {
                p = p->next;
            }
            p->next = t;
            t->next = Head;
            Head = t;
            
        }
    }
    else{

        for(i=0; i< index - 1; i++) p = p->next;

        t= new Node;
        t->data = x;

        t->next = p->next;
        p->next = t;
    }
}

int main(){

    int A[] = {2,4,6,8,10};
    create(A,5);

    Display(Head);
    RDisplay(Head);

    return 0;
}