#include <iostream>
using namespace std;

struct Node{

    int data;
    struct Node *next;     //self referential structure

}*first = NULL;

void create(int A[], int n){


}

void display(struct Node *p){

    while(p != 0){

        cout << p->data << " ";
        p = p->next;             //traversing through Node

    }

}

int main(){

    int A[] = {3,5,7,10,15};

    return 0;
}