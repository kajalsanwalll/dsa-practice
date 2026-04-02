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

        cin >> p->terms[i].coeff;
        cin >> p->terms[i].Exp;
    }
}

void Display(struct Poly p){

    int i;
    for(i=0; i< p.n; i++){

        cout << p.terms[i].coeff << "x" << p.terms[i].Exp << " + ";
    }
    cout << endl;
}


int main(){

    struct Poly p1;
    create(&p1);
    Display(p1);

    return 0;
}