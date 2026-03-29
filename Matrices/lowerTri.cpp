#include <iostream>
using namespace std;

struct Matrix{

    int *A;
    int n; // dimension
};

void set(struct Matrix *m, int i, int j, int x){

    if(i>=j){

        m->A[i*(i-1)/2 + j-1] = x; // row major formula

    }
    
}

int get(struct Matrix m, int i, int j){

    if(i>=j){

        return m.A[i*(i-1)/2 + j-1];
    }
    else{

        return 0;
    }
    
}

void Display(struct Matrix m){

    int i,j;

    for(i=1;i<=m.n;i++){

        for(j=1;j<=m.n;j++){

            if(i>=j){
                cout << " "<< m.A[i*(i-1)/2 + j-1] ;
            }
            else{
                cout << " 0 " ;
            }
            
        }
        cout << endl;
    }
}


int main(){

    struct Matrix m;
    int i,j,x;

    cout << "Enter dimension: " ;
    cin >> m.n;

    m.A= new int[(m.n*(m.n+1)/2)];

    cout << "Enter all elements: ";
    for(i=1;i<=m.n;i++){

        for(j=1;j<=m.n;j++){
            cin >> x;
            set(&m,i,j,x);
        }
    }
    cout << endl;

    Display(m);

}