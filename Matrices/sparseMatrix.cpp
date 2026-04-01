#include <iostream>
using namespace std;

struct Element{

    int i;
    int j;
    int x;

};

struct Sparse{

    int m;
    int n;
    int num;
    struct Element *e;

};

void create(struct Sparse *s){

    int i;
    cout << "enter dimensions: ";
    cin >> s->m; 
    cin >> s->n ;

    cout << "Enter number of non-zero elements: ";
    cin >> s->num;

    s->e = new Element[s->num];
    cout << "enter all elements: ";

    for(i=0;i<s->num;i++){

        cin >> s->e[i].i;
        cin >> s->e[i].j;
        cin >> s->e[i].x;
    }
}

void Display(struct Sparse s){

    int i,j,k=0;

    for(i=0;i<s.m;i++){

        for(j=0;j<s.n;j++){

            if(i==s.e[k].i && j==s.e[k].j){
                cout << s.e[k++].x;
            }
            else{
                cout << " 0 " ;
            }
            
        }
        cout << endl;
    }
}


int main(){

    struct Sparse s;
    create(&s);
    Display(s);

    return 0;
}