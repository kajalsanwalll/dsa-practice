#include <iostream>
using namespace std;

//tower of hanoi using recursion
void TOH(int n, int A, int B, int C){

    if(n>0){

        TOH(n-1, A,C,B);
        cout << "from " << A << " to " << C << endl;
        TOH(n-1,B,A,C);
    }
}

int main(){

    TOH(3,1,2,3);
}