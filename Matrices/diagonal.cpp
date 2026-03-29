#include <iostream>
using namespace std;

struct Matrix{

    int A[10];
    int n; // dimension
};

void set(struct Matrix *m, int i, int j, int x){

    if(i==j){
        m->A[i-1] = x;
    }
}

int get(struct Matrix m, int i, int j){

    if(i==j){

        return m.A[i-1];
    } 
    else{
        return 0;
    }
}

void Display(struct Matrix m){

    int i,j;

    for(i=0;i<m.n;i++){

        for(j=0;j<m.n;j++){

            if(i==j){
                cout << " "<< m.A[i] ;
            }
            else{
                cout << " 0 " ;
            }
            
        }
        cout << endl;
    }
}


// class for diagonal matrix
class Diagonal{

    private:
        int n;
        int *A;

    public:
        Diagonal(){
          n=2; // minimum of 2 if not provided
          A = new int[2];
        }
        Diagonal(int n){
            this->n=n;
            A= new int[n]; // dynamic heap array
        }
        void set(int i, int j, int x);
        int get(int i, int j);
        void Display();
        ~Diagonal(){
            delete []A;

        } 
};

void Diagonal::set(int i, int j , int x){

    if(i==j){
        A[i-1]=x;
    }
}

int Diagonal ::get(int i, int j){

    if(i==j){

        return A[i-1];
    }
    else{
        return 0;
    }
}

void Diagonal::Display(){

    int i,j;

    for(i=0;i<n;i++){

        for(j=0;j<n;j++){

            if(i==j){
                cout << " " << A[i];

            }
            else{
                cout << " 0 ";
            }
        }
        cout << endl;
    }
}

int main(){

    struct Matrix m;
    m.n=4;
    set(&m,1,1,5);set(&m,2,2,8);set(&m,3,3,7);set(&m,4,4,12);
    cout << " " << (get(m,4,4)) << endl;
    Display(m);

    Diagonal d(4);

    d.set(1,1,6);
    d.set(2,2,6);
    d.set(3,3,6);
    d.set(4,4,6);
    d.Display();

}