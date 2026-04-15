#include <iostream>
using namespace std;

struct Node{

    int coeff;
    int exp;
    struct Node *next;

} *poly = NULL;

void create(){

    struct Node *t,*last;
    int num, i;

    cout << "enter number of terms: ";
    cin >> num;

    cout << "enter each term with coefficient and exponents: " << endl;

    for(i=0; i< num ; i++){
        
        t = new Node;
        cin >> t->coeff ;
        cin >> t->exp;
        t->next = NULL;

        if(poly == NULL){
            
            poly = last = t;
        }
        else{

            last->next = t;
            last = t;
        }
    }

}

void Display(struct Node *p){

    while(p){
        cout << p->coeff << "x^" << p->exp;
        if(p->next != NULL)
            cout << " + ";
        p = p->next;
    }
    cout << endl;
}


int main(){


    create();
    Display(poly);

    return 0;
}