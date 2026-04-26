#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

void SortedInsert(Node* &first, int x){
    Node *t = new Node;
    t->data = x;
    t->next = NULL;

    if(first == NULL){
        first = t;
    }
    else{
        Node *p = first, *q = NULL;

        while(p && p->data < x){
            q = p;
            p = p->next;
        }

        if(q == NULL){
            t->next = first;
            first = t;
        }
        else{
            t->next = q->next;
            q->next = t;
        }
    }
}

Node* LSearch(Node* &first, int key){
    Node *p = first, *q = NULL;

    while(p != NULL){
        if(key == p->data){
            if(q != NULL){   // move to front
                q->next = p->next;
                p->next = first;
                first = p;
            }
            return p;
        }
        q = p;
        p = p->next;
    }
    return NULL;
}

int Hash(int key){
    return key % 10;
}

void HashInsert(Node *H[], int key){
    int index = Hash(key);
    SortedInsert(H[index], key);
}

int main(){
    Node *HT[10];

    for(int i=0;i<10;i++){
        HT[i] = NULL;
    }

    HashInsert(HT, 8);
    HashInsert(HT, 98);
    HashInsert(HT, 68);

    Node *temp = LSearch(HT[Hash(98)], 98);

    if(temp)
        cout << temp->data << endl;
    else
        cout << "Not found" << endl;

    return 0;
}