#include <iostream>
using namespace std;


// A template class in cpp
template<class T>

class Array{

    //data members - private 
    private:
        T *A;
        int size;
        int length;

    // member functions - public
    public:
        //constructors

        // non-parameterized constructor
        Array(){

            size=10;
            A= new T[10];
            length=0;
        }
        //parameterized constructor
        Array(int sz){

            size= sz;
            length=0;
            A= new T[size];
        }

        //destructor
        ~Array(){

            delete []A;  //free heap memory
        }

        //functions
        void Display();  // not taking parameters because it's in a class
        void Insert(int index, T x);
        T Delete(int index);
          
};

template< class T>
void Array<T>::Display(){

    for(int i=0; i<length;i++){
        cout << " "<< A[i] << " " ;
    }
}

template< class T>
void Array<T>::Insert(int index, T x){

    if(index>=0 && index<= length){

        for(int i=length-1;i>=index;i--){
            A[i+1] = A[i];
        }
        A[index]= x;
        length++;
    }
}

template< class T>
T Array<T>::Delete(int index){

    T x=0;
    if(index>=0 && index< length){

        x= A[index];
        for(int i=index;i<length-1;i++){
             
            A[i] = A[i+1];
        }
        length--;
    }
    return x;
}


int main(){

    Array<float> arr(10);

    arr.Insert(0,5.3);
    arr.Insert(1,6.6);
    arr.Insert(2,7.8);
    arr.Display();
    cout << endl << arr.Delete(1) << endl;
    arr.Display();


    return 0;
}