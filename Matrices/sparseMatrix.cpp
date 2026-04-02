#include <iostream>
#include <stdio.h>
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

struct Sparse * add(struct Sparse *s1, struct Sparse *s2){

    struct Sparse *sum;
    int i,j,k;
    i=j=k=0;

    sum = (struct Sparse *)malloc(sizeof(struct Sparse));
    sum->e = (struct Element *)malloc((s1->num+s2->num)*sizeof(struct Element));

    while(i<s1->num && j < s2->num){

        //checking row numbers
        if(s1->e[i].i < s2->e[j].i){

            sum->e[k++] = s1->e[i++];
        }
        else if(s1->e[i].i > s2->e[j].i){

            sum->e[k++] = s2->e[j++];
        }

        //checking column numbers
        else{

            if(s1->e[i].j < s2->e[j].j){

            sum->e[k++] = s1->e[i++];
            }
            else if(s1->e[i].j > s2->e[j].j){

            sum->e[k++] = s2->e[j++];
            }

            // row and column numbers are equal
            else{

            sum->e[k] = s1->e[i];
            sum->e[k++] = s1->e[i++].x + s2->e[j++].x;

            }
        }
    }

    for(;i<s1->num;i++){
        sum->e[k++] = s1->e[i];
    }
    for(;j<s2->num;j++){
        sum->e[k++] = s2->e[j];
    }

    sum->m = s1->m;
    sum->n = s1->n;
    sum->num = k;

    return sum;
}


int main(){

    /*
    cout << "now sparse matrix definition:" << endl;
    struct Sparse s;
    create(&s);
    Display(s);

    */

    
    struct Sparse s1,s2,*s3;

    create(&s1);
    create(&s2);
    s3 = add(&s1,&s2);

    cout << "First matrix: " << endl;
    Display(s1);

    cout << "Second matrix: " << endl;
    Display(s2);

    cout << "Sum matrix: " << endl;
    Display(*s3);

    return 0;
}