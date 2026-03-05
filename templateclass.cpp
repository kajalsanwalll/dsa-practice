// generic classes written inorder to make them work for all data types.
#include <iostream>
using namespace std;

template <class T>
class Arithmetic{
    private:
      T a;
      T b;
     
    public:
      Arithmetic(T a, T b);
      T add();
      T sub();  
};

template <class T>
Arithmetic<T>::Arithmetic(T a, T b){
    
    this->a = a;
    this->b = b;
}

template <class T>
T Arithmetic<T> ::add(){

    T c;
    c =a +b;
    return c;
}

template <class T>
T Arithmetic<T> ::sub(){

    T c;
    c =a -b;
    return c;
}

int main(){

    Arithmetic<int> ar(10,5);
    cout << "add ints: " << ar.add() << endl;

    Arithmetic<float> ar1(1.11,2.22);
    cout << "add float nos: " << ar1.add() <<endl;
}
