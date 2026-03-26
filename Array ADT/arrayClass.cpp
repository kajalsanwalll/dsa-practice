// writing classes and constructors instead of structures

#include <iostream>
using namespace std;


// A class in cpp
class Array{

    //data members - private 
    private:
        int *A;
        int size;
        int length;

    // member functions - public
    public:
        //constructors

        // non-parameterized constructor
        Array(){

            size=10;
            A= new int[10];
            length=0;
        }
        //parameterized constructor
        Array(int sz){

            size= sz;
            length=0;
            A= new int[size];
        }

        //destructor
        ~Array(){

            delete []A;  //free heap memory
        }

        //functions
        void Display();  // not taking parameters because it's in a class
        void Insert(int index, int x);
        int Delete(int index);
          
};

void Array::Display(){

    for(int i=0; i<length;i++){
        cout << A[i] << endl;
    }
}

void Array::Insert(int index, int x){

    if(index>=0 && index< length){

        for(int i=length-1;i>=index;i--){
            A[i+1] = A[i];
        }
        A[index]= x;
        length++;
    }
}


int main(){




    return 0;
}