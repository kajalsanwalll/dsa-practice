#include <iostream>
using namespace std;

struct Term{

    int coeff;
    int Exp;

};

struct Poly{

    int n;
    struct Term *terms;

};

void create(struct Poly *p){

    int i;

    cout << "Number of terms?" ;
    cin >> p->n ;
    cout << endl;

    p->terms = new struct Term[p->n];

    cout << "Enter terms: " << endl;
    for(i=0;i<p->n;i++){
        
    }
}


int main(){


    return 0;
}