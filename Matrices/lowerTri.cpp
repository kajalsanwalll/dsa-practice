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

// class for lower triangular matrix
class LowerTriangle{

    private:
        int n;
        int *A;

    public:
        LowerTriangle(){
          n=2; // minimum of 2 if not provided
          A = new int[2*(2+1)/2];
        }
        LowerTriangle(int n){
            this->n=n;
            A= new int[n*(n+1)/2]; // dynamic heap array
        }
        void set(int i, int j, int x);
        int get(int i, int j);
        void Display();
        ~LowerTriangle(){
            delete []A;

        } 
};

void LowerTriangle::set(int i, int j , int x){

    if(i>=j){

        A[i*(i-1)/2 + j-1] = x; // row major formula

    }
}

int LowerTriangle ::get(int i, int j){

    if(i>=j){

        return A[i*(i-1)/2 + j-1];
    }
    else{

        return 0;
    }
}

void LowerTriangle::Display(){

    int i,j;

    for(i=1;i<=n;i++){

        for(j=1;j<=n;j++){

            if(i>=j){
                cout << " "<< A[i*(i-1)/2 + j-1] ;
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