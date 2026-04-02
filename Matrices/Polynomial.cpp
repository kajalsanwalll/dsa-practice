#include <iostream>
#include <stdio.h>

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

struct Poly *add(struct Poly *p1, struct Poly *p2){

    int i,j,k;
    struct Poly *sum; 
    sum = (struct Poly *)malloc(sizeof(struct Poly));
    sum->terms=(struct Term *)malloc( (p1->n + p2->n) *sizeof(struct Term));

    i=j=k=0;

    while(i<p1->n && j<p2->n){

        if(p1->terms[i].Exp > p2->terms[j].Exp){
            sum->terms[k++] = p1->terms[i++];
        }
        else if(p1->terms[i].Exp < p2->terms[j].Exp){
            sum->terms[k++] = p2->terms[j++];
        }
        else{
            sum->terms[k].Exp = p1->terms[i].Exp;
            sum->terms[k++].coeff = p1->terms[i++].coeff + p2->terms[j++].coeff;
        }
    }

    for(;i<p1->n;i++){

        sum->terms[k++] = p1->terms[i];
    }
    for(;j<p2->n;j++){

        sum->terms[k++] = p2->terms[j];
    }
    
    sum->n = k;


    return sum;
}

int main(){

    struct Poly p1,p2,*p3;

    create(&p1);
    create(&p2);

    p3 = add(&p1, &p2);

    cout << endl;
    Display(p1);

    cout << endl;
    Display(p2);

    cout << endl;
    Display(*p3);

    return 0;
}