#include <iostream>
using namespace std;

struct Node{

    int coeff;
    int exp;
    struct Node *next;

} *poly = NULL;

void create(struct Node *p, int x){

    struct Node *t,*last;
    int num, i;

    cout << "enter number of terms: ";
    cin >> num;

    cout << "enter each term with coefficient and exponents: " << endl;

    for(i=0; i< num ; i++){
        
        t = new Node;
        cin >> t->coeff, t->exp;
        t->next = NULL;

        if(poly == NULL){
            
            poly = t = last;
        }
        else{

            last->next = t;
            last = t;
        }
    }

}




int main(){



    return 0;
}