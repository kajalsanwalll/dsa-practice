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

int height(struct Node *root){

    int x=0,y=0;

    if(root == 0){
        return 0;
    }

    x = height(root->lchild);
    y = height(root->rchild);

    if(x > y){
        return x+1;
    }
    else {
        return y+1; 
    }

}

struct Node *InPre(struct Node *p){
    while (p && p->rchild != NULL)
    {
        p = p->rchild;
    }
    return p;
    
}

struct Node *InSucc(struct Node *p){
    while (p && p->lchild != NULL)
    {
        p = p->lchild;
    }
    return p;
    
}

struct Node *Delete(struct Node *p, int key){

    struct Node *q;

    if(p == NULL){
        return NULL;
    }
    if(p->lchild == NULL && p->rchild == NULL){

        if(p == root){
            root = NULL;
        }
        delete p;
        return NULL;
    }

    if(key < p->data){
        p->lchild = Delete(p->lchild, key);
    }
    else if(key > p->data){
        p->rchild = Delete(p->rchild, key);
    }
    else{
        if(height(p->lchild) > height(p->rchild)){
            //inorder predecessor on left child 
            q = InPre(p->lchild);
            p->data = q->data;
            p->lchild = Delete(p->lchild, q->data);
        }
        else{
            //inorder successor on right child
            q = InSucc(p->rchild);
            p->data = q->data;
            p->rchild = Delete(p->rchild, q->data);
        }
    }

    return p;

}

int main(){

    struct Node *temp;

    Insert(9);
    Insert(7);
    Insert(5);
    Insert(8);
    Insert(2);
    Insert(0);
    Delete(root,0);

    Inorder(root);
    
    temp = Search(5);
    if(temp != NULL){
        cout << "element " << temp->data << " is found" << endl;
    }
    else{
        cout << "element isnt found" << endl;
    }

    return 0;
}