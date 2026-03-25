// writing classes and constructors instead of structures

#include <iostream>
using namespace std;

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

            size:10;
            A= new int[10];
            length=0;
        }
        //parameterized constructor
        Array(int sz){

            size= sz;
            length=0;
        }
          

};


int main(){




    return 0;
}