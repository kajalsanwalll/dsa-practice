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
        root = p;
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

struct Node *RInsert(struct Node *p, int key){

    struct Node *t=NULL;
    
    if(p == NULL){

        t = new Node;
        t->data = key;
        t->lchild = t->rchild = NULL;
        return t;
    }

    if(key < p->data){
        p->lchild = RInsert(p->lchild, key);
    }
    else if(key > p->data){
        p->rchild = RInsert(p->rchild, key);
    }

    return p;
}

void Inorder(struct Node *p){

    if(p){

        Inorder(p->lchild);
        cout << p->data << " ";
        Inorder(p->rchild);
    }
    
}

struct Node* Search(int key){

    struct Node *t = root;

    while( t != NULL){

        if(key == t->data){
            cout << endl;
            return t;
        }
        else if(key < t->data){
            t = t->lchild;
        }
        else{
            t = t->rchild;
        }
    }
    cout << endl;
    return NULL;
}

int main(){

    struct Node *temp;

    Insert(9);
    Insert(7);
    Insert(5);
    Insert(8);
    Insert(2);
    Insert(0);

    Inorder(root);
    
    temp = Search(15);
    if(temp != NULL){
        cout << "element " << temp->data << " is found" << endl;
    }
    else{
        cout << "element isnt found" << endl;
    }

    return 0;
}