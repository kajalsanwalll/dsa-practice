#include <iostream>
using namespace std;

struct Node{

    struct Node *lchild;
    int data;
    struct Node *rchild;

} *root = NULL;


void Insert(int key){

    struct Node *t = root;
    struct Node *r; // tailing pointer
    struct Node *p; //to make new nodes

    if(root == NULL){

        p = new Node;
        p->data = key;
        p->lchild = p->rchild = NULL;
        return;
    }
    while(t != NULL){

        r = t;
        if(key < t->data){
            t = t->lchild;
        }
        else if(key > t->data){
            t = t->rchild;
        }
        else {
            return;
        }
    }

    p = new Node;
    p->data = key;
    p->lchild = p->rchild = NULL;

    if(key < r->data){

        r->lchild = p;
    }
    else{

        r->rchild = p;
    }

}

int main(){


    return 0;
}