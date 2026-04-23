#include <iostream>
using namespace std;

struct Node{
    struct Node *lchild;
    int data;
    int height;
    struct Node *rchild;
}*root = NULL;

//recursive insertion of avl trees
struct Node *RInsert(struct Node *p, int key){

    struct Node *t=NULL;

    if(p == NULL){

        t = new Node;
        t->data = key;
        t->height = 1;
        t->lchild = t->rchild = NULL;
        return t;
    }

    if(key < p->data){
        p->lchild = RInsert(p->lchild, key);
    }
    else if(key > p->data){
        p->rchild = RInsert(p->rchild, key);
    }

    p->height = NodeHeight();
    return p;
}


int main(){



    return 0;
}